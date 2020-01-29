/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ZombieHorde.cpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 15:49:01 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 17:39:25 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(/* args */)
{
}

ZombieHorde::~ZombieHorde()
{
}

ZombieHorde::ZombieHorde(int N){
    this->N = N;
    this->horde = new Zombie[N];
    
    srand(time(0));
    for (int i = 0; i < N; i++)
    {
        this->horde[i] = *randomZombie();
    }
}

void ZombieHorde::announce()
{
    for (int i = 0; i < this->N; i++)
    {
        this->horde[i].announce();
    }
}

Zombie * ZombieHorde::randomZombie()
{
    Zombie * z;

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

    z = new Zombie(name, "Horde");
    return z;
}