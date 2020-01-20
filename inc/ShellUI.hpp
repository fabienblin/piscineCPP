/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ShellUI.hpp                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 15:07:20 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 21:02:44 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef SHELLUI
#define SHELLUI

#include "IMonitorDisplay.hpp"

class ShellUI : IMonitorDisplay
{
private:
    
public:
    ShellUI(/* args */);
    ~ShellUI();
    ShellUI & operator=(ShellUI const &);
    ShellUI(ShellUI &);

    void display();
    void init();
    void refresh();
    void print(std::string);
};


#endif