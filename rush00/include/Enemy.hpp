#ifndef ENEMY_HPP
# define ENEMY_HPP

#include "Personnage.hpp"

class Enemy : public Personnage
{
    public:
        Enemy();
        Enemy(int, int);
        Enemy(Enemy const &src);
        virtual~Enemy();
        Enemy &operator=(Enemy const &src);
        bool collide(Personnage &);
};


#endif