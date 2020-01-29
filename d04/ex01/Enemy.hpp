/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Enemy.hpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 17:37:17 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 19:58:04 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef ENEMY
# define ENEMY

#include <iostream>

class Enemy
{
protected:
    int hp;
    std::string type;

public:
    Enemy(/* args */);
    virtual ~Enemy();
    Enemy(const Enemy &);
	Enemy & operator=(const Enemy &);

    Enemy(int hp, std::string const & type);
    std::string getType() const;
    int getHP() const;
    void setHP(int hp);
    virtual void takeDamage(int) = 0;
};

#endif