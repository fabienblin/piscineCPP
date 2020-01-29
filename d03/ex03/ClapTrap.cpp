/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ClapTrap.cpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 11:48:25 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/16 19:43:06 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap(/* args */)
{
    std::cout << "New Clap." << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Delete Clap." << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "New default Clap "+name+"." << std::endl;
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

ClapTrap::ClapTrap (const ClapTrap & ft)
{
    std::cout << "New Clap "+ft.name+" by copy." << std::endl;
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

ClapTrap & ClapTrap::operator=(const ClapTrap & ft)
{
    std::cout << "Assignation Clap "+ft.name+" by assignation." << std::endl;
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


ClapTrap::ClapTrap(unsigned int hitPoint, unsigned int maxHitPoint, unsigned int energy, unsigned int maxEnergy, unsigned int level, std::string name, unsigned int meleDamage, unsigned int rangeDamage, unsigned int armor)
{
    std::cout << "New Clap "+name+"." << std::endl;
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

unsigned int ClapTrap::rangedAttack(std::string const & target)
{
    if (this->hitPoint == 0)
        std::cout << this->name + " can't move because he's dead." << std::endl;
    else
        std::cout << this->name + " attacks " + target + " at range, causing " << this->rangeDamage << " points of damage !" << std::endl;
    return this->rangeDamage;
}

unsigned int ClapTrap::meleeAttack(std::string const & target)
{
    if (this->hitPoint == 0)
        std::cout << this->name + " can't move because he's dead." << std::endl;
    else
        std::cout << this->name + " attacks " + target + " by mele, causing " << this->meleDamage << " points of damage !" << std::endl;
    return this->rangeDamage;
}

void ClapTrap::takeDamage(unsigned int amount)
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

void ClapTrap::beRepaired(unsigned int amount)
{
    unsigned int heal = (amount < this->maxHitPoint ? this->maxHitPoint - amount : this->maxHitPoint - this->hitPoint);

    this->hitPoint += heal;
    std::cout << this->name + " repairs " << heal << " points of damage !" << std::endl;
}

void ClapTrap::show()
{
    std::cout << this->name+"(" << this->level << ") HP[" << this->hitPoint << "/" << this->maxHitPoint << "] energy[" << this->energy << "]" << std::endl;
}

std::string const & ClapTrap::getName()
{
    return this->name;
}