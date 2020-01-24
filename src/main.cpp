/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 12:41:57 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/24 13:51:27 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "main.hpp"

void exitProg()
{
    // need to delete monitor here

    endwin();
    exit(0);
}

void keyHandler(const int key)
{
    if (key == 27)
        exitProg();
    if (key == KEY_UP || key == KEY_DOWN || key == KEY_LEFT || key == KEY_RIGHT)
        ;
}

int main()
{
    initscr();
    nodelay(stdscr, true);

    Monitor *monitor = new Monitor();
    // (void)monitor;
    while (true)
    {
        monitor->display();
        doupdate();

        //keyHandler(getch());
        usleep(300000);
    }

    endwin();
    return 0;
}
