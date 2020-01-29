/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Bullet.cpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/19 15:19:30 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/19 19:55:15 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Bullet.hpp"

Bullet::Bullet(/* args */)
{
}

Bullet::~Bullet()
{
}

Bullet::Bullet(Bullet const &b)
{
    *this = b;
}

Bullet::Bullet(int x, int y, char cursor, std::string type)
{
    this->x = x;
    this->y = y;
    this->cursor = cursor;
    
    if (type == "player")
    {
        this->direction = 1;
    }
    else if (type == "enemy")
    {
        this->direction = -1;
    }
}

Bullet & Bullet::operator=(Bullet const &b)
{
    this->damage = b.damage;
    this->direction = b.direction;
    this->x = b.x;
    this->y = b.y;
    this->cursor = b.cursor;
    return *this;
}



void Bullet::setX(int x){this->x = x;}
void Bullet::setY(int y){this->y = y;}
int Bullet::getX() const{return (x);}
int Bullet::getY() const {return (y);}
char Bullet::getCursor() const {return this->cursor;}
int Bullet::getDirection() const {return direction;}

void Bullet::move(){this->x += direction;}