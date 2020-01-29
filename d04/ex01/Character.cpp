/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Character.cpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 17:37:25 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 21:14:15 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(/* args */)
{
    //  std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

Character::~Character()
{
    //  std::cout << "Aaargh ..." << std::endl;
}

Character &Character::operator=(const Character &e)
{
    this->name = e.name;
    this->weapon = e.weapon;
    this->ap = e.ap;

    return *this;
}

Character::Character(const Character &e)
{
    this->name = e.name;
    this->weapon = e.weapon;
    this->ap = e.ap;
}

Character::Character(std::string const &name)
{
    this->name = name;
    this->weapon = nullptr;
    this->ap = 40;
}

void Character::recoverAP()
{
    int recover = 10 - (40 - this->ap);
    this->ap += recover;
}

void Character::equip(AWeapon * w)
{
    this->weapon = w;
}

void Character::attack(Enemy * e)
{
    if (this->weapon != nullptr && e != nullptr)
    {
        if (this->weapon->getAPCost() <= this->ap)
        {
            std::cout << this->name << " attacks " << e->getType() << " with a " << this->weapon->getName() << std::endl;
            this->ap -= this->weapon->getAPCost();
            this->weapon->attack();
            e->takeDamage(this->getWeapon()->getDamage());
            if (e->getHP() <= 0)
                delete e;
        }
    }
}

std::ostream & operator<< (std::ostream & o, Character const & c)
{
    if (c.getWeapon() != nullptr)
        o << c.getName() << " has " << c.getAP() << " AP and wields a " << c.getWeapon()->getName(); 
    else
        o << c.getName() << " has " << c.getAP() << "  and is unarmed";
    o  << std::endl;
    return o;
}

std::string Character::getName() const
{
    return this->name;
}

int Character::getAP() const
{
    return this->ap;
}

AWeapon * Character::getWeapon() const
{
    return this->weapon;
}