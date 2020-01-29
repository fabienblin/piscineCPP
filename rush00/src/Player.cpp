#include "Player.hpp"


Player::Player(int x, int y) : Personnage(x, y)
{
    this->_type = PLAYER;
    this->_cursor = 'P';
}

Player::Player()
{}

Player::Player(Player const &src)
{
    *this = src;
}

Player::~Player()
{}

Player &Player::operator=(Player const &src)
{
    Personnage::operator=(src);
    return *this;
}

bool Player::collide(Personnage & c)
{
    if (this->getX() == c.getX() && this->getY() == c.getY())
    {
        delete &c;
        return true;
    }
    else
        return false;
}