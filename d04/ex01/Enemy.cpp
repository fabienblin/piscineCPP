/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Enemy.cpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 17:37:25 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 19:26:02 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */
 
 #include "Enemy.hpp"

 Enemy::Enemy(/* args */)
 {
    //  std::cout << "Gaaah. Me want smash heads !" << std::endl;
    //  this->hp = 170;
    //  this->type = "Super Mutant";
 }
 
 Enemy::~Enemy()
 {
    //  std::cout << "Aaargh ..." << std::endl;
 }
 
 Enemy & Enemy::operator=(const Enemy & e)
{
    this->hp = e.hp;
    this->type = e.type;

    return *this;
}

Enemy::Enemy(const Enemy & e)
{
    this->hp = e.hp;
    this->type = e.type;
}

Enemy::Enemy(int hp, std::string const & type)
{
    this->hp = hp;
    this->type = type;
}

std::string Enemy::getType() const
{
    return this->type;
}

int Enemy::getHP() const
{
    return this->hp;
}

void Enemy::setHP(int hp)
{
    this->hp = hp;
}
