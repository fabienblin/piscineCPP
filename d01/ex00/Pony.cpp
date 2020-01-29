/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Pony.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 12:35:12 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 13:23:40 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony ()
{
    std::cout << "Anonymous poney stacked." << std::endl;
}

Pony::Pony(std::string name, int age)
{
    this->name = name;
    this->age = age;

    std::cout << "Poney " << name << " heaped." << std::endl;
}

Pony::~Pony()
{
    if (!name.empty()){
        std::cout << "Poney " << name << " fell and died." << std::endl;
    }
    else {
        std::cout << "Anonymous poney died." << std::endl;
    }
    
}
