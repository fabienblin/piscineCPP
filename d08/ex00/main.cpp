/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/23 13:40:08 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/23 15:26:37 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    int tab[] = {75, 23, 65, 42, 13};
    std::list<int> lst(tab, tab + 5);

    // easyfind(lst, 13); // find last element
    easyfind(lst, 0); // find element not in list

    return 0;
}
