/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   FragTrap.hpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 12:05:45 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/16 17:57:39 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FRAGTRAP
# define FRAGTRAP

#include <iostream>
#include <time.h>
#include <cmath>

class FragTrap
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
    FragTrap(/* args */);
    ~FragTrap();
    FragTrap (const FragTrap & ft);
    FragTrap & operator= (const FragTrap & ft);
    
    FragTrap(std::string name);
    FragTrap(unsigned int hitPoint, unsigned int maxHitPoint, unsigned int energy, unsigned int maxEnergy, unsigned int level, std::string name, unsigned int meleDamage, unsigned int rangeDamage, unsigned int armor);
    unsigned int rangedAttack(std::string const & target);
    unsigned int meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void show();
    std::string const & getName();
    unsigned int vaulthunter_dot_exe(std::string const & target);

};

#endif