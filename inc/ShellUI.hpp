/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ShellUI.hpp                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 15:07:20 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/24 15:54:30 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef SHELLUI
#define SHELLUI

#include <ncurses.h>

#include "IMonitorDisplay.hpp"

class ShellUI : public IMonitorDisplay
{
private:
    WINDOW * window;
    int width;
    int height;
    int cursor[2]; // y, x du curseur de fenetre deplaceable avec ncurses::move()

public:
    ShellUI(/* args */);
    ~ShellUI();
    ShellUI & operator=(ShellUI const &);
    ShellUI(ShellUI &);

    void display(std::string);
    void refresh();
};


#endif