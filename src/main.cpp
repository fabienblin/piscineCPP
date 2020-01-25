/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 12:41:57 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/25 10:51:49 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

//#include "main.hpp"
#include "CpuModule.hpp"
#include "DateModule.hpp"
#include "HostModule.hpp"
#include "OSModule.hpp"
#include "RamModule.hpp"

/*void exitProg()
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
}*/
#include "Monitor.hpp"

int main()
{

    CpuModule cpu;
    HostModule host;
    DateModule dat;
    OSModule os;
    RamModule ram;

    std::cout << "[" << host.name << "] : " << host.getData() << std::endl;
    std::cout << "[" << dat.name << "] : " << dat.getData() << std::endl;
    std::cout << "[" << os.name << "] : " << os.getData() << std::endl;
    std::cout << "[" << cpu.name << "] : " << cpu.getData() << std::endl;
    std::cout << "[" << ram.name << "] : " << ram.getData() << std::endl;

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
