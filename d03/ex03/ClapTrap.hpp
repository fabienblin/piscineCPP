/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ClapTrap.hpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 12:05:45 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/16 18:45:23 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef CLAPTRAP
# define CLAPTRAP

#include <iostream>
#include <time.h>
#include <cmath>

class ClapTrap
{
protected:
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
    ClapTrap(/* args */);
    ~ClapTrap();
    ClapTrap (const ClapTrap & ft);
    ClapTrap & operator= (const ClapTrap & ft);
    
    ClapTrap(std::string name);
    ClapTrap(unsigned int hitPoint, unsigned int maxHitPoint, unsigned int energy, unsigned int maxEnergy, unsigned int level, std::string name, unsigned int meleDamage, unsigned int rangeDamage, unsigned int armor);
    unsigned int rangedAttack(std::string const & target);
    unsigned int meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void show();
    std::string const & getName();

};

#endif