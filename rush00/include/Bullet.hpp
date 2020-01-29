#ifndef BULLET_HPP
#define BULLET_HPP

#include <iostream>
#include <string.h>
#include <sstream>
#include <iomanip>
#include <curses.h>
#include <ncurses.h>


class Bullet
{
private:
    int damage;
    int direction;
    int x;
    int y;
    char cursor;

public:
    Bullet();
    ~Bullet();
    Bullet (int, int, char, std::string);
    
    Bullet(Bullet const &b);
    Bullet &operator=(Bullet const &b);

    void move();
    void setX(int);
    void setY(int);
    int getX() const;
    int getY() const;
    char getCursor() const;
     int getDirection() const;

};

#endif