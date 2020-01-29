/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Wave.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/19 18:48:21 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/19 21:16:59 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Wave.hpp"

Wave::Wave(/* args */)
{
}

Wave::~Wave()
{
}

Wave & Wave::operator=(Wave const & w)
{
    (void)w;
    return *this;
}

Wave::Wave(Wave &w)
{
    *this = w;
}

Wave::Wave(int nbEnemies)
{
    this->nbEnemies = nbEnemies;
    for (int i = 0; i < nbEnemies; i++)
    {
        wave[i] = new Enemy(COLS, rand() % LINES);
    }
}

Enemy * Wave::getEnemy(int i)
{
    return this->wave[i];
}

int Wave::getNbEnemies()
{
    return nbEnemies;
}