/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   UserModule.hpp                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 15:07:20 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 20:58:31 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef USERMODULE
#define USERMODULE

#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <iostream>
#include <stdlib.h>

#include "IMonitorModule.hpp"
#include "ShellUI.hpp"

class UserModule : IMonitorModule, ShellUI
{
private:
    std::string hostName;
    std::string userName;

public:
    UserModule(/* args */);
    ~UserModule();
    UserModule & operator=(UserModule const &);
    UserModule(UserModule &);
    
    void setUserName();
    void setHostName();
    std::string getHostName();
    std::string getUserName();
    void display();
};


#endif