/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   HostModule.cpp                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/24 14:12:31 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/24 15:36:52 by kcabus      ###    #+. /#+    ###.fr     */
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
}

HostModule & HostModule::operator=(HostModule const & copy)
{
	if (this != &copy)
	{
		this->_hostName = copy._hostName;
		this->_userName = copy._userName;
	}
	return (*this);
}

HostModule::HostModule(HostModule const & copy)
{
	*this = copy;
}

//    HostModule(/* args */);

/* Interface methods */
void	HostModule::updateData(void)
{
    char	name[256];
	char	*user;

	user = getenv("USER");
    if (!user || gethostname(name, 256) == -1) {
		throw std::exception();//TODO: claquer un autre exception ?
    }

    this->_hostName = std::string(name);
	this->_userName = std::string(user);
}

std::string	HostModule::getData(void) const
{
	return std::string("HostName:" + this->_hostName + " | UserName:" + this->_userName);
}

const std::string HostModule::name = "HostName/UserName";