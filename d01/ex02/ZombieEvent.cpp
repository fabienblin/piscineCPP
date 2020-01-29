/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ZombieEvent.cpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 14:39:49 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 15:40:26 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

# include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(/* args */)
{
}

ZombieEvent::~ZombieEvent()
{
}

void ZombieEvent::setZombieType(std::string type)
{
    this->type = type;
}

Zombie * ZombieEvent::newZombie(std::string name)
{
    Zombie *z = new Zombie(name, this->type);
    return z;
}

Zombie * ZombieEvent::randomChump()
{
    Zombie * z;

    srand(time(nullptr));
    char alphanum[] = "abcdefghijklmnopqrstuvwxyz";
    int nameLen = 3 + rand() % 10;
    std::string name = "";
    
    for (int i = 0; i < nameLen; i++)
    {
        char c = alphanum[rand() % 26];
        if (i == 0)
            c += 'A' - 'a';
        name.push_back(c);
    }

    z = newZombie(name);
    return z;
}