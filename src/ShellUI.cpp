/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ShellUI.cpp                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 20:12:29 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 21:06:51 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ShellUI.hpp"

ShellUI::ShellUI(/* args */)
{
    init();
}

ShellUI::~ShellUI()
{
}

ShellUI & ShellUI::operator=(ShellUI const & s)
{
    (void)s;
    return *this;
}

ShellUI::ShellUI(ShellUI & s)
{
    *this = s;
}

void ShellUI::init()
{
    this->window = subwin(stdscr, height, width, 0, 0);
}

void ShellUI::refresh()
{
    wnoutrefresh(window);
    box(window, ACS_VLINE, ACS_HLINE);
}

void ShellUI::print(std::string msg)
{
    mvwprintw(window, cursor[0], cursor[1], msg.c_str());
    cursor[0] += (cursor[0] < height ? 1 : 0);
}

void ShellUI::display()
{
    // print(hostName);
    // print(userName);
    refresh();
}