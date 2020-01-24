/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ShellUI.cpp                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 20:12:29 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/24 18:03:47 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ShellUI.hpp"

ShellUI::ShellUI(/* args */)
{
    this->height = 2;
    this->width = COLS;
    this->cursor[0] = 0;
    this->cursor[1] = 0;
    this->window = subwin(stdscr, height + 2, width, cursor[0], cursor[1]);
    this->cursor[0] = 1;
    this->cursor[1] = 1;
}

ShellUI::~ShellUI()
{
}

ShellUI &ShellUI::operator=(ShellUI const &s)
{
    (void)s;
    return *this;
}

ShellUI::ShellUI(ShellUI &s)
{
    *this = s;
}

void ShellUI::display(std::string moduleInfo)
{

    mvwprintw(window, cursor[0], cursor[1], moduleInfo.c_str());
}

void ShellUI::refresh()
{
    box(window, ACS_VLINE, ACS_HLINE);
    wnoutrefresh(window);
}
