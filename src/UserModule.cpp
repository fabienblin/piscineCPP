/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   UserModule.cpp                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 20:11:21 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/24 15:12:23 by fablin      ###    #+. /#+    ###.fr     */
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
    // (void)m;
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
    return this->hostName + " " + this->userName;
}