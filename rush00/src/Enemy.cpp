
#include "Enemy.hpp"

Enemy::Enemy(int x, int y) : Personnage(x, y)
{
    this->_type = ENEMY;
    this->_cursor = 'E';
}

Enemy::Enemy()
{
}

Enemy::Enemy(Enemy const &src)
{
    *this = src;
}
Enemy::~Enemy()
{
}
Enemy &Enemy::operator=(Enemy const &src)
{
    Personnage::operator=(src);
    return *this;
}

bool Enemy::collide(Personnage & c)
{
    if (this->getX() == c.getX() && this->getY() == c.getY())
    {
        delete &c;
        return true;
    }
    else
        return false;
}