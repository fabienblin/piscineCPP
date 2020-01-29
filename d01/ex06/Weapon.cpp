/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Weapon.cpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 22:08:54 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 22:08:55 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string _type): type(_type){}

Weapon::~Weapon(){}

const std::string Weapon::getType() const
{
    return (this->type);
}

void Weapon::setType(std::string _type)
{
    type = _type;
}
