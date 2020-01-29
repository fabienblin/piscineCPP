/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ScavTrap.cpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 11:48:25 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/16 19:43:40 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap(/* args */)
{
    std::cout << "New scav." << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Delete scav." << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "New default scav "+name+"." << std::endl;
    this->hitPoint = 100;
    this->maxHitPoint = 100;
    this->energy = 50;
    this->maxEnergy = 5;
    this->level = 1;
    this->name = name;
    this->meleDamage = 20;
    this->rangeDamage = 15;
    this->armor = 3;
}

ScavTrap::ScavTrap (const ScavTrap & ft)
{
    std::cout << "New scav "+ft.name+" by copy." << std::endl;
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

ScavTrap & ScavTrap::operator=(const ScavTrap & ft)
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


ScavTrap::ScavTrap(unsigned int hitPoint, unsigned int maxHitPoint, unsigned int energy, unsigned int maxEnergy, unsigned int level, std::string name, unsigned int meleDamage, unsigned int rangeDamage, unsigned int armor)
{
    std::cout << "New scav "+name+"." << std::endl;
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

unsigned int ScavTrap::rangedAttack(std::string const & target)
{
    if (this->hitPoint == 0)
        std::cout << this->name + " can't move because he's dead." << std::endl;
    else
        std::cout << this->name + " attacks " + target + " at range, causing " << this->rangeDamage << " points of damage !" << std::endl;
    return this->rangeDamage;
}

unsigned int ScavTrap::meleeAttack(std::string const & target)
{
    if (this->hitPoint == 0)
        std::cout << this->name + " can't move because he's dead." << std::endl;
    else
        std::cout << this->name + " attacks " + target + " by mele, causing " << this->meleDamage << " points of damage !" << std::endl;
    return this->rangeDamage;
}

void ScavTrap::takeDamage(unsigned int amount)
{
    if (this->hitPoint == 0)
    {
        std::cout << this->name + " can't be more dead." << std::endl;
    }
    else
    {
        unsigned int damage = (amount > armor ? amount - armor : armor - amount);
        damage = (damage >= this->hitPoint ? this->hitPoint : damage);
        this->hitPoint -= damage;
        std::cout << this->name + " resists for "<< this->armor <<" but takes " << damage << " points of damage !" << std::endl;
        if (this->hitPoint == 0)
            std::cout << this->name + " has died." << std::endl;
    }
}

void ScavTrap::beRepaired(unsigned int amount)
{
    unsigned int heal = (amount < this->maxHitPoint ? this->maxHitPoint - amount : this->maxHitPoint - this->hitPoint);

    this->hitPoint += heal;
    std::cout << this->name + " repairs " << heal << " points of damage !" << std::endl;
}

void ScavTrap::show()
{
    std::cout << this->name+"(" << this->level << ") HP[" << this->hitPoint << "/" << this->maxHitPoint << "] energy[" << this->energy << "]" << std::endl;
}

std::string const & ScavTrap::getName()
{
    return this->name;
}

void ScavTrap::challengeNewcomer(std::string const & target)
{
    if (this->hitPoint == 0)
        std::cout << this->name + " can't move because he's dead." << std::endl;
    else
    {
        const std::string challenges[] = {"Bottle Flip", "Ice Bucket", "Russian Roulette", "Purge", "Dwarf Throw"};
        std::string chal = challenges[rand() % 5];
        std::cout << this->name + " has challenged "+target+" to a " + chal + " challenge." << std::endl;

    }
}