
#include "Personnage.hpp"

Personnage::Personnage(int x, int y) : _x(x), _y(y)
{}

Personnage::Personnage(){}
Personnage::Personnage(Personnage const &src)
{
    *this = src;
}
Personnage::~Personnage()
{

}
Personnage &Personnage::operator=(Personnage const &src)
{
    _x = src._x;
    _y = src._y;
    _type = src._type;
    return *this;
}

void Personnage::setX(int x){_x = x;}
void Personnage::setY(int y){_y = y;}
void Personnage::setType(std::string type){_type = type;}
int Personnage::getX() const{return (_x);}
int Personnage::getY() const {return (_y);}
std::string Personnage::getType() const {return (_type);}

char Personnage::getCursor() const
{
    return (_cursor);
}


Bullet * Personnage::shoot()
{
    /*if (this->_type == PLAYER)
        return *(new Bullet(*this, this->getX() + 1, this->getY()));
    else if (this->_type == ENEMY)
        return *(new Bullet(*this, this->getX() - 1, this->getY()));*/
        return new Bullet(this->getX() + 1, this->getY(), '-', PLAYER);
}

int Personnage::getDamage()
{
    return this->damage;
}