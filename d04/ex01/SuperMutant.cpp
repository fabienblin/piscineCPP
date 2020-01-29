/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   SuperMutant.cpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 17:37:25 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 21:06:58 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(/* args */) : Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh ..." << std::endl;
}

void SuperMutant::takeDamage(int damage)
{
    damage -= 3;
    
    this->hp -= damage;
    if (this->hp < 0)
        this->hp = 0; 
}
