/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   NinjaTrap.cpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 11:48:25 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/16 18:51:44 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(/* args */)
{
    std::cout << "New Ninja." << std::endl;
}

NinjaTrap::~NinjaTrap()
{
    std::cout << "Delete Ninja." << std::endl;
}

NinjaTrap::NinjaTrap(std::string name)
{
    std::cout << "New default Ninja " + name + "." << std::endl;
    this->hitPoint = 60;
    this->maxHitPoint = 60;
    this->energy = 120;
    this->maxEnergy = 120;
    this->level = 1;
    this->name = name;
    this->meleDamage = 60;
    this->rangeDamage = 5;
    this->armor = 0;
}

NinjaTrap::NinjaTrap(const NinjaTrap &ft)
{
    std::cout << "New Ninja " + ft.name + " by copy." << std::endl;
    this->hitPoint = ft.hitPoint;
    this->maxHitPoint = ft.maxHitPoint;
    this->energy = ft.energy;
    this->maxEnergy = ft.maxEnergy;
    this->level = ft.level;
    this->name = ft.name;
    this->meleDamage = ft.meleDamage;
    this->rangeDamage = ft.rangeDamage;
    this->armor = ft.armor;
}

NinjaTrap &NinjaTrap::operator=(const NinjaTrap &ft)
{
    std::cout << "Assignation Ninja " + ft.name + " by assignation." << std::endl;
    this->hitPoint = ft.hitPoint;
    this->maxHitPoint = ft.maxHitPoint;
    this->energy = ft.energy;
    this->maxEnergy = ft.maxEnergy;
    this->level = ft.level;
    this->name = ft.name;
    this->meleDamage = ft.meleDamage;
    this->rangeDamage = ft.rangeDamage;
    this->armor = ft.armor;
    return *this;
}

NinjaTrap::NinjaTrap(unsigned int hitPoint, unsigned int maxHitPoint, unsigned int energy, unsigned int maxEnergy, unsigned int level, std::string name, unsigned int meleDamage, unsigned int rangeDamage, unsigned int armor)
{
    std::cout << "New Ninja " + name + "." << std::endl;
    this->hitPoint = hitPoint;
    this->maxHitPoint = maxHitPoint;
    this->energy = energy;
    this->maxEnergy = maxEnergy;
    this->level = level;
    this->name = name;
    this->meleDamage = meleDamage;
    this->rangeDamage = rangeDamage;
    this->armor = armor;
}

void NinjaTrap::ninjaShoebox(ClapTrap &ct)
{
    (void)ct;
    std::cout << "Ima ninja bruh ! I kill all claps." << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap &nt)
{
    (void)nt;
    std::cout << "Ima ninja bruh ! I dont kill other ninjas." << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap &st)
{
    (void)st;
    std::cout << "Ima ninja bruh ! I open scavs in two." << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap &ft)
{
    (void)ft;
    std::cout << "Ima ninja bruh ! Frags will get shoeboxed." << std::endl;
}