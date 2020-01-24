/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   IMonitorDisplay.hpp                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 15:07:20 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/24 15:14:21 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef IMONITORDISPLAY
#define IMONITORDISPLAY

#include <ncurses.h>
#include <iostream>

class IMonitorDisplay
{
protected:
    
public:
    virtual void display(std::string) = 0;
    virtual void init() = 0;
    virtual void refresh() = 0;
    virtual void print(std::string) = 0;
};


#endif