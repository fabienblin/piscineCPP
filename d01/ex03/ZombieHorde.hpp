/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ZombieHorde.hpp                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 15:49:20 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 17:15:48 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde
{
private:
    Zombie *horde;
    int N;
    
public:
    ZombieHorde(/* args */);
    ~ZombieHorde();
    ZombieHorde(int N);
    void announce();
    Zombie * randomZombie();
};

#endif