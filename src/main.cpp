/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 12:41:57 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/25 16:49:53 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Monitor.hpp"

int main(int ac, char **av)
{
    int choice;

    if (ac != 2 || (strcmp(av[1], "Shell") != 0 && strcmp(av[1], "Graphical") != 0))
    {
        std::cout << "Choose your display : Shell or Graphical" << std::endl;
        return 1;
    }

    if (strcmp(av[1], "Graphical") == 0)
        choice = eGraphical;
    else
        choice = eShell;
    

    Monitor *monitor = new Monitor(choice);

    while (true)
    {
        monitor->refresh();
        monitor->display();

        usleep(300000);
    }

    return 0;
}
