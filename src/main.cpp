/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 12:41:57 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 15:02:16 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "main.hpp"

int main()
{
    WINDOW *haut, *bas;
    initscr();
    //nodelay(stdscr, true);

    haut = subwin(stdscr, LINES / 2, COLS, 0, 0);
    bas = subwin(stdscr, LINES / 2, COLS, LINES / 2, 0);

    char *input = new char[200];
    while (true)
    {
        box(haut, ACS_VLINE, ACS_HLINE);
        box(bas, ACS_VLINE, ACS_HLINE);
        refresh();
        wrefresh(haut);
        wrefresh(bas);
        mvwprintw(haut, 1, 1, input);
        mvwprintw(bas, 1, 1, "Ceci est la fenetre du bas");
        getnstr(input, 200);

        if (input[0] == 27)
            exit(0);
        usleep(300000);
    }

    endwin();
    return 0;
}
