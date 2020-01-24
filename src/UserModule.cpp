/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   UserModule.cpp                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 20:11:21 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/24 16:24:45 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "UserModule.hpp"

UserModule::UserModule(/* args */)
{
    this->setHostName();
    this->setUserName();
}

UserModule::~UserModule()
{
}

UserModule & UserModule::operator=(UserModule const &m)
{
    this->hostName = m.hostName;
    this->userName = m.userName;
    return *this;
}

UserModule::UserModule(UserModule & m)
{
    *this = m;
}

void UserModule::setHostName() {
    const size_t LEN = 100;
    char name[LEN];
    if (gethostname(name, LEN) == -1) {
        this->hostName = strerror(errno);
    }
    this->hostName = name;
}

void UserModule::setUserName()
{
    this->userName = getenv("USER");
}

std::string UserModule::getHostName()
{
    return this->hostName;
}

std::string UserModule::getUserName()
{
    return this->userName;
}

std::string UserModule::getInfo()
{
    return "Host Name : " + this->hostName + " User Name : " + this->userName;
}