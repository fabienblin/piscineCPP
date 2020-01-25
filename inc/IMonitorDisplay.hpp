/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   IMonitorDisplay.hpp                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 15:07:20 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/24 21:01:40 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef IMONITORDISPLAY
#define IMONITORDISPLAY

#include <iostream>
#include <vector>

#include "IMonitorModule.hpp"

class IMonitorDisplay
{
protected:
    
public:
    virtual void display(std::vector<IMonitorModule *>) = 0;
    virtual void refresh() = 0;
};


#endif