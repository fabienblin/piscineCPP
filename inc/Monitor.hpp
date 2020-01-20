/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Monitor.hpp                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 15:26:28 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 20:57:17 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef MONITOR
#define MONITOR

#include "IMonitorModule.hpp"

// Monitor handles the modules
class Monitor
{
private:
    // IMonitorModule * modules[];
    
public:
    Monitor();
    ~Monitor();
    Monitor & operator=(Monitor const &);
    Monitor(Monitor &);
};


#endif