/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   IMonitorDisplay.cpp                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 15:04:29 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 15:14:16 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "IMonitorDisplay.hpp"

IMonitorDisplay::IMonitorDisplay(/* args */)
{
}

IMonitorDisplay::~IMonitorDisplay()
{
}

IMonitorDisplay::IMonitorDisplay(IMonitorDisplay & md)
{
    *this = md;
}

IMonitorDisplay & IMonitorDisplay::operator=(IMonitorDisplay const & md)
{
    (void)md;
    return *this;
}