#ifndef PERSONNAGE_HPP
# define PERSONNAGE_HPP

#include <iostream>

#define PLAYER "player"
#define ENEMY "enemy"

#include "Bullet.hpp"

class Personnage
{
    public:
        Personnage();
        Personnage(int x, int y);
        Personnage(Personnage const &src);
        virtual ~Personnage();

        Personnage &operator=(Personnage const &src);

        void setX(int);
        void setY(int);
        void setType(std::string);
        int getX() const;
        int getY() const;
        std::string getType() const;
        char getCursor() const;
        virtual bool collide(Personnage &) = 0;
        Bullet *shoot();
        int getDamage();

    protected:
        int _x;
        int _y;
        std::string _type;
        char _cursor;
        int damage;
};


#endif