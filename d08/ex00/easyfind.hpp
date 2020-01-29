/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   easyfind.hpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/23 13:37:23 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/23 18:12:17 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef EASYFIND
#define EASYFIND

#include <iostream>
#include <list>

template <typename T>
void easyfind(T t, int n)
{
    try
    {
        for (std::list<int>::iterator it = t.begin(); it != t.end(); it++)
        {
            if (*it == n)
                std::cout << *it << std::endl;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
};

#endif