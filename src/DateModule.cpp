/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   DateModule.cpp                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/24 15:38:42 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/24 15:40:04 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "DateModule.hpp"

/* Canonical */
DateModule::DateModule(void)
{
	this->updateData();
}

DateModule::~DateModule(void)
{
}

DateModule & DateModule::operator=(DateModule const & copy)
{
	if (this != &copy)
	{
		this->_hostName = copy._hostName;
		this->_userName = copy._userName;
	}
	return (*this);
}

DateModule::DateModule(DateModule const & copy)
{
	*this = copy;
}

//    DateModule(/* args */);

/* Interface methods */
void	DateModule::updateData(void)
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

std::string	DateModule::getData(void) const
{
	return std::string("HostName:" + this->_hostName + " | UserName:" + this->_userName);
}

const std::string DateModule::name = "HostName/UserName";