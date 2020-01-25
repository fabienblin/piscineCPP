/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Monitor.hpp                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 15:26:28 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/25 10:54:29 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef MONITOR
#define MONITOR

#include <vector>

#include "IMonitorModule.hpp"
#include "IMonitorDisplay.hpp"
#include "ShellUI.hpp"
#include "CpuModule.hpp"
#include "DateModule.hpp"
#include "HostModule.hpp"
#include "OSModule.hpp"
#include "RamModule.hpp"

// Monitor handles the modules
class Monitor
{
private:
    std::vector<IMonitorModule *> modules; // seeHostModule
    IMonitorDisplay * displayMode; // see ShellUI and GraphicUI

    public:
    Monitor();
    ~Monitor();
    Monitor & operator=(Monitor const &);
    Monitor(Monitor &);

    void display();
    void refresh();
};


#endif