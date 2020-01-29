/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Peon.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 12:54:22 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 15:56:24 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Peon.hpp"


Peon::Peon(/* args */)
{
}

Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
}

Peon & Peon::operator=(const Peon & p)
{
    this->name = p.name;
    return *this;
}

Peon::Peon(const Peon & p) : Victim(p.name)
{
}

Peon::Peon(std::string name) : Victim(name)
{
    std::cout << "Zog zog." << std::endl;
}

void Peon::getPolymorphed()
{
    std::cout << this->name << " has been turned into a pink pony !" << std::endl;
}