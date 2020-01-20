/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   IMonitorDisplay.cpp                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 15:04:29 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 21:05:14 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "IMonitorDisplay.hpp"

IMonitorDisplay::IMonitorDisplay(/* args */)
{
    height = 4;
    width = COLS;
    cursor[0] = 1;
    cursor[1] = 1;
}

IMonitorDisplay::~IMonitorDisplay()
{
    delwin(window);
}

IMonitorDisplay::IMonitorDisplay(IMonitorDisplay &md)
{
    *this = md;
}

IMonitorDisplay & IMonitorDisplay::operator=(IMonitorDisplay const & md)
{
    (void)md;
    return *this;
}
