/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ZombieEvent.hpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 14:37:57 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 15:34:57 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include "Zombie.hpp"
#include <random>

class ZombieEvent
{
private:
    std::string type;
public:
    ZombieEvent(/* args */);
    ~ZombieEvent();
    void setZombieType(std::string type);
    Zombie * newZombie(std::string name);
    Zombie * randomChump();
};

#endif