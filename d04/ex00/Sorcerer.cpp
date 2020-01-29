/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Sorcerer.cpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 13:03:39 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 15:58:52 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{
}

Sorcerer::~Sorcerer()
{
   std::cout << this->name << ", " << this->title << ", is dead. Consequences will never be the same !" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer & s)
{
    this->name = s.name;
    this->title = s.title;
}

Sorcerer & Sorcerer::operator=(const Sorcerer &s)
{
    this->name = s.name;
    this->title = s.title;
    return *this;
}

Sorcerer::Sorcerer(std::string name, std::string title)
{
    std::cout << name << ", " << title << ", is born !" << std::endl;
    this->name = name;
    this->title = title;
}
std::ostream & operator<<(std::ostream &o, Sorcerer const &s)
{
    o << "I am " << s.getName() << ", " << s.getTitle() << ", and I like ponies !" << std::endl;
    return o;
}

void Sorcerer::polymorph(Victim const & v) const
{
    ((Victim &)v).getPolymorphed();
}

std::string Sorcerer::getName() const
{
    return this->name;
}

std::string Sorcerer::getTitle() const
{
    return this->title;
}