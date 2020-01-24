/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   OSModule.cpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/24 15:58:41 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/24 17:09:31 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "OSModule.hpp"

/* Canonical */
OSModule::OSModule(void)
{
	if (this->_osStruct == NULL)
		this->_osStruct = new struct utsname;
	this->updateData();
}

OSModule::~OSModule(void)
{
	if (this->_osStruct != NULL)
		delete this->_osStruct;
}

OSModule &OSModule::operator=(OSModule const &copy)
{
	if (this != &copy)
	{
		this->_osStruct = copy._osStruct;
	}
	return (*this);
}

OSModule::OSModule(OSModule const &copy)
{
	*this = copy;
}

/* Interface methods */

void	OSModule::verif_data(void) const
{
	if (this->_osStruct)
		throw std::exception();
}

void OSModule::updateData(void)
{


	if (uname(this->_osStruct) == -1)
		throw std::exception();//TODO: whitch exception ?

}

//char sysname[];	/* Operating system name (e.g., "Linux") */       
//char nodename[];	/* Name within "some implementation-defined network" */       
//char release[];	/* Operating system release (e.g., "2.6.28") */       
//char version[];	/* Operating system version */       
//char machine[];	/* Hardware identifier */
std::string OSModule::getData(void) const
{
	this->verif_data();

	struct utsname tmp = *this->_osStruct;
	std::string	res;

	res.append(tmp.sysname);
	res.append("|");
	res.append(tmp.nodename);
	res.append("|");
	res.append(tmp.release);
	res.append("|");
	res.append(tmp.version);
	res.append("|");
	res.append(tmp.machine);
	return res;
}


const std::string OSModule::name = "Operating System Information";