#ifndef PLAYER_HPP
# define PLAYER_HPP

#include "Personnage.hpp"

class Player : public Personnage
{

    public:
        Player();
        Player(int, int);
        Player(Player const &src);
        ~Player();
        Player &operator=(Player const &src);
        bool collide(Personnage &);
};


#endif