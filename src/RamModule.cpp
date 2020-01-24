/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   RamModule.cpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/24 18:05:34 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/24 21:45:34 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "RamModule.hpp"

/* Canonical */
RamModule::RamModule(void)
{
	this->updateData();
}

RamModule::~RamModule(void)
{
}

RamModule &RamModule::operator=(RamModule const &copy)
{
	if (this != &copy)
	{
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
/*	if (!this->_date)
		throw std::exception();*/
}

//	long    f_type;     /* type de système de fichiers       */
//	long    f_bsize;    /* Taille optimale de bloc           */
//	long    f_blocks;   /* Nombre total de blocs             */
//	long    f_bfree;    /* Blocs libres                      */
//	long    f_bavail;   /* Blocs libres pour utilisateurs    */
//	long    f_files;    /* Nombres de nœuds                  */
//	long    f_ffree;    /* Nombre de nœuds libres            */
//	fsid_t  f_fsid;     /* ID du système de fichiers         */
//	long    f_namelen;  /* Longueur maxi des noms de fichier */
/*	struct statfs ram;
	
	if (statfs("/", &ram) == -1)
		throw std::exception();
	
	this->_blockUsed = ram.f_blocks - ram.f_bfree;
	this->_blockMax = ram.f_blocks;*/
void RamModule::updateData(void)
{
	if (std::system("top -l 1 | grep Phys | awk '{print $2, $6}' | sed -e \"s/M//g\" > /tmp/ram_info"))
		return ;

	std::ifstream myfile("/tmp/ram_info");
	
	myfile >> this->_blockUsed >> this->_blockFree;
}

std::string RamModule::getData(void) const
{
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