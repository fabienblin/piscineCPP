/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   HostModule.cpp                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/24 14:12:31 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/24 17:01:14 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "HostModule.hpp"

/* Canonical */
HostModule::HostModule(void)
{
	this->updateData();
}

HostModule::~HostModule(void)
{
	if (this->_hostName)
		delete this->_hostName;
	if (this->_userName)
		delete this->_userName;
}

HostModule & HostModule::operator=(HostModule const & copy)
{
	if (this != &copy)
	{
		/* host name */
		if (this->_hostName)
			delete this->_hostName;
		
		if (copy._hostName)
			this->_hostName = new std::string(*(copy._hostName));
		else
			this->_hostName = NULL;
		/* username */
		if (this->_userName)
			delete this->_userName;
		
		if (copy._userName)
			this->_userName = new std::string(*(copy._hostName));
		else
			this->_userName = NULL;
	}
	return (*this);
}

HostModule::HostModule(HostModule const & copy)
{
	*this = copy;
}

//    HostModule(/* args */);

/* Interface methods */

void	HostModule::verif_data(void) const
{
	if (this->_userName == NULL || this->_hostName == NULL)
		throw std::exception();
}

void	HostModule::updateData(void)
{
    char	name[256];
	char	*user;

	user = getenv("USER");
    if (!user || gethostname(name, 256) == -1) {
		throw std::exception();//TODO: claquer un autre exception ?
    }

    this->_hostName = new std::string(name);
	this->_userName = new std::string(user);
}

std::string	HostModule::getData(void) const
{
	return std::string("HostName:" + *this->_hostName + " | UserName:" + *this->_userName);
}

const std::string HostModule::name = "HostName/UserName";