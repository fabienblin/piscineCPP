/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   IMonitorModule.cpp                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 15:04:29 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 19:15:31 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "IMonitorModule.hpp"

IMonitorModule::IMonitorModule(/* args */)
{
}

IMonitorModule::~IMonitorModule()
{
}

IMonitorModule::IMonitorModule(IMonitorModule & mm)
{
    *this = mm;
}

IMonitorModule & IMonitorModule::operator=(IMonitorModule const & mm)
{
    (void)mm;
    return *this;
}