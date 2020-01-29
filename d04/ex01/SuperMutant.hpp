/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   SuperMutant.hpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 17:37:17 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 18:37:16 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef SUPERMUTANT
# define SUPERMUTANT

#include <iostream>
#include "Enemy.hpp"

class SuperMutant:public Enemy
{
private:

public:
    SuperMutant(/* args */);
    ~SuperMutant();

    void takeDamage(int);
};

#endif