/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ScavTrap.hpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 12:05:45 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/16 18:10:59 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef SCAVTRAP
# define SCAVTRAP

#include <iostream>
#include <time.h>
#include <cmath>

class ScavTrap
{
private:
    unsigned int hitPoint;
    unsigned int maxHitPoint;
    unsigned int energy;
    unsigned int maxEnergy;
    unsigned int level;
    std::string name;
    unsigned int meleDamage;
    unsigned int rangeDamage;
    unsigned int armor;

public:
    ScavTrap(/* args */);
    ~ScavTrap();
    ScavTrap (const ScavTrap & ft);
    ScavTrap & operator= (const ScavTrap & ft);
    
    ScavTrap(std::string name);
    ScavTrap(unsigned int hitPoint, unsigned int maxHitPoint, unsigned int energy, unsigned int maxEnergy, unsigned int level, std::string name, unsigned int meleDamage, unsigned int rangeDamage, unsigned int armor);
    unsigned int rangedAttack(std::string const & target);
    unsigned int meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void show();
    std::string const & getName();
    void challengeNewcomer(std::string const & target);

};

#endif