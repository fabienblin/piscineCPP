/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   RadScorpion.hpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 17:37:17 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 18:36:58 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef RADSCORPION
# define RADSCORPION

#include <iostream>
#include "Enemy.hpp"

class RadScorpion:public Enemy
{
private:

public:
    RadScorpion(/* args */);
    ~RadScorpion();

    void takeDamage(int);
};

#endif