/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Monitor.cpp                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 15:04:29 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/25 10:58:32 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Monitor.hpp"

Monitor::Monitor()
{
    this->modules.push_back(new HostModule());
    this->modules.push_back(new DateModule());
    this->modules.push_back(new CpuModule());
    this->modules.push_back(new OSModule());
    this->modules.push_back(new RamModule());
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
    try
    {
        displayMode->display(this->modules);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}

void Monitor::refresh()
{
    for (std::vector<IMonitorModule *>::iterator it = this->modules.begin(); it != this->modules.end(); it++)
    {
        (*it)->updateData();
        displayMode->refresh();
    }
    doupdate(); // equivalent refresh()
}
