/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 12:41:57 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/24 19:25:54 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Monitor.hpp"

int main()
{
    initscr();
    nodelay(stdscr, true);

    Monitor *monitor = new Monitor();
    // (void)monitor;
    while (true)
    {
        clear();
        monitor->display();
        monitor->refresh();

        //keyHandler(getch());
        usleep(300000);
    }

    endwin();
    return 0;
}
