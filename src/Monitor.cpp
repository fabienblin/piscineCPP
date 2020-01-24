/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Monitor.cpp                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 15:04:29 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/24 15:17:03 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Monitor.hpp"

Monitor::Monitor()
{
    this->modules.push_back(new UserModule());
    this->displayMode = new ShellUI();
}

Monitor::~Monitor()
{
}

Monitor::Monitor(Monitor &m)
{
    *this = m;
}

Monitor &Monitor::operator=(Monitor const &m)
{
    (void)m;
    return *this;
}

void Monitor::display()
{
    for (std::vector<IMonitorModule *>::iterator it = this->modules.begin(); it != this->modules.end(); it++)
    {
        displayMode->display((*it)->getInfo());
    }
}

void Monitor::refresh()
{
    for (std::vector<IMonitorModule *>::iterator it = this->modules.begin(); it != this->modules.end(); it++)
    {
        displayMode->refresh();
    }
}
