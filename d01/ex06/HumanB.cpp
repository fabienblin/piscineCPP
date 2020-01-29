/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   HumanB.cpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 22:09:08 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 22:09:09 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string _name): name(_name){}

HumanB::~HumanB(){}


void HumanB::attack()
{
    std::cout << this->name << ' ' << "attacks with his " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &_weapon)
{
    this->weapon = &_weapon;

}
