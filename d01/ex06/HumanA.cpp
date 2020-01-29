/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   HumanA.cpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 22:09:17 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 22:09:17 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon &_weapon): name(_name), weapon(_weapon){}

HumanA::~HumanA(){}


void HumanA::attack()
{
    std::cout << this->name << ' ' << "attacks with his " << this->weapon.getType() << std::endl;
}
