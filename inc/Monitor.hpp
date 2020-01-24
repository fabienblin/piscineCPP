/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Monitor.hpp                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 15:26:28 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/24 15:48:50 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef MONITOR
#define MONITOR

#include <vector>

#include "IMonitorModule.hpp"
#include "IMonitorDisplay.hpp"
#include "ShellUI.hpp"
#include "UserModule.hpp"

// Monitor handles the modules
class Monitor
{
private:
    std::vector<IMonitorModule *> modules; // see UserModule
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