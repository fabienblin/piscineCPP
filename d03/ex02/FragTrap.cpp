/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   FragTrap.cpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 11:48:25 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/16 19:43:50 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap(/* args */)
{
    std::cout << "New FR4G-TP." << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "Delete FR4G-TP." << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "New default FR4G-TP "+name+"." << std::endl;
    this->hitPoint = 100;
    this->maxHitPoint = 100;
    this->energy = 100;
    this->maxEnergy = 100;
    this->level = 1;
    this->name = name;
    this->meleDamage = 30;
    this->rangeDamage = 20;
    this->armor = 5;
}

FragTrap::FragTrap (const FragTrap & ft)
{
    std::cout << "New FR4G-TP "+ft.name+" by copy." << std::endl;
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

FragTrap & FragTrap::operator=(const FragTrap & ft)
{
    std::cout << "Assignation FR4G-TP "+ft.name+" by assignation." << std::endl;
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


FragTrap::FragTrap(unsigned int hitPoint, unsigned int maxHitPoint, unsigned int energy, unsigned int maxEnergy, unsigned int level, std::string name, unsigned int meleDamage, unsigned int rangeDamage, unsigned int armor)
{
    std::cout << "New FR4G-TP "+name+"." << std::endl;
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

unsigned int FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    unsigned long damage = 0;
    if (this->hitPoint == 0)
        std::cout << this->name + " can't move because he's dead." << std::endl;
    else
    {
        const std::string battleCries[] = {"Kame Hame Ha !", "Sharingan !", "Big Berta !", "Banzai !", "Genkidama !"};
        if (this->energy >= 25)
        {
            damage = (this->rangeDamage + this->meleDamage) + rand() % (this->rangeDamage + this->meleDamage);
            std::string battleCry = battleCries[rand() % 5];
            std::cout << this->name + " activates his special on "+target+" dealing "<< damage <<" damage : " << battleCry << std::endl;
            this->energy -= 25;
        }
        else
            std::cout << this->name + " needs more energy." << std::endl;
    }
    return damage;
}