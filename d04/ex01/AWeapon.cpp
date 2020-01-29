/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   AWeapon.cpp                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 12:54:22 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 17:32:33 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "AWeapon.hpp"


AWeapon::AWeapon(/* args */)
{
}

AWeapon::~AWeapon()
{
}

AWeapon & AWeapon::operator=(const AWeapon & w)
{
    // std::cout << "Assignation Peon" << std::endl;
    this->name = w.name;
    this->damage = w.damage;
    this->ap = w.ap;

    return *this;
}

AWeapon::AWeapon(const AWeapon & w)
{
    this->name = w.name;
    this->damage = w.damage;
    this->ap = w.ap;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
    this->name = name;
    this->damage = damage;
    this->ap = apcost;
}

std::string AWeapon::getName() const
{
    return this->name;
}

int AWeapon::getAPCost() const
{
    return this->ap;
}

int AWeapon::getDamage() const
{
    return this->damage;
}

