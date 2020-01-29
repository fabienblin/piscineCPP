#ifndef GAME_H
# define GAME_H

#include "Enemy.hpp"
#include "Player.hpp"
#include "Personnage.hpp"
#include "Wave.hpp"

#include <iostream>
#include <string.h>
#include <sstream>
#include <iomanip>
#include <curses.h>
#include <stdlib.h>
#include <ncurses.h>

class Game
{
    public:
        Game();
        Game(Player *p);
        Game(Game const &src);
        ~Game();
        Game &operator=(Game const &src);
        void setEnemy(Enemy *enemy);
        void move(Personnage &, int);
        void move(); // bullets
        void move(Wave & );
        bool check(int, int);
        Bullet * getBullets(int i);
        void setBullets(Bullet *);
        int getCompteurBullet() const;
        void setWave(Wave &);

    private:
        Player *_player;
        Enemy _enemy[30];
        int _indice;
        Bullet *bullets[200];
        int _compteurBullet;
        Wave wave;
    };
#endif