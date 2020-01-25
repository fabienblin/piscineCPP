/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   RamModule.cpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/24 18:05:34 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/25 14:26:30 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "RamModule.hpp"

/* Canonical */
RamModule::RamModule(void)
{
	this->_isInit = false;
	this->updateData();
}

RamModule::~RamModule(void)
{
}

RamModule &RamModule::operator=(RamModule const &copy)
{
	if (this != &copy)
	{
		this->_isInit = copy._isInit;
		this->_blockFree = copy._blockFree;
		this->_blockUsed = copy._blockUsed;
	}
	return (*this);
}

RamModule::RamModule(RamModule const &copy)
{
	*this = copy;
}

/* Interface methods */

void	RamModule::verif_data(void) const
{
	if (!this->_isInit)
		throw std::exception();
}

void RamModule::updateData(void)
{
	if (std::system("top -l 1 | grep Phys | awk '{print $2, $6}' | sed -e \"s/M//g\" > /tmp/ram_info"))
		throw std::exception();

	std::ifstream myfile("/tmp/ram_info");
	
	myfile >> this->_blockUsed >> this->_blockFree;
	this->_isInit = true;
}

std::string RamModule::getData(void) const
{
	this->verif_data();
	
	std::stringstream ss;
	ss <<	"Blocks used ";
	ss <<	this->_blockUsed;
	ss <<	"/";
	ss <<	this->_blockUsed + this->_blockFree;
	ss <<	" : ";
	ss <<	(this->_blockUsed * 100) / (this->_blockFree + this->_blockUsed);
	ss <<	"%";

	return std::string(ss.str());
}

const std::string RamModule::name = "RAM";