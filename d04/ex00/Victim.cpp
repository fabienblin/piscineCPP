/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Victim.cpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 13:14:43 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 15:50:01 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Victim.hpp"


Victim::Victim(/* args */)
{
}

Victim::~Victim()
{
    std::cout << "Victim " << this->name << " just died for no apparent reason !" << std::endl;
}

Victim::Victim(const Victim & s)
{
    this->name = s.name;
}

Victim & Victim::operator=(const Victim &s)
{
    this->name = s.name;
    return *this;
}

Victim::Victim(std::string name)
{
    std::cout << "Some random victim called " << name << " just popped !" << std::endl;
    this->name = name;
}


std::ostream & operator<<(std::ostream &o, Victim const &v)
{
    std::cout << "I'm " << v.getName() << " and I like otters !" << std::endl;
    return o;
}

void Victim::getPolymorphed()
{
    std::cout << this->name << " has been turned into a cute little sheep !" << std::endl;
}

std::string Victim::getName() const
{
    return this->name;
}