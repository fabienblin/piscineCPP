/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   NinjaTrap.hpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 12:05:45 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/16 18:38:46 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef NINJATRAP
# define NINJATRAP

#include <iostream>
#include <time.h>
#include <cmath>

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap:public ClapTrap
{
private:

public:
    NinjaTrap(/* args */);
    ~NinjaTrap();
    NinjaTrap (const NinjaTrap & ft);
    NinjaTrap & operator= (const NinjaTrap & ft);
    
    NinjaTrap(std::string name);
    NinjaTrap(unsigned int hitPoint, unsigned int maxHitPoint, unsigned int energy, unsigned int maxEnergy, unsigned int level, std::string name, unsigned int meleDamage, unsigned int rangeDamage, unsigned int armor);
    void ninjaShoebox(ClapTrap & ct);
    void ninjaShoebox(NinjaTrap & nt);
    void ninjaShoebox(ScavTrap & st);
    void ninjaShoebox(FragTrap & ft);
};

#endif