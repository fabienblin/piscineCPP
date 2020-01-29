#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>
#include <string.h>
#include <sstream>
#include <iomanip>
#include <curses.h>
#include <stdlib.h>
#include <ncurses.h>
#include <unistd.h>
#include <cstdlib>
#include <iostream>
#include <ctime>


#include "Bullet.hpp"
#include "Personnage.hpp"
#include "Enemy.hpp"
#include "Player.hpp"
#include "Game.hpp"

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */

#define LARGEUR 80      /* position horizental de la fenêtre */
#define HAUTEUR 10      /* position vertical de la fenêtre */
#define POSX    20      /* Position horizontale de la fenêtre */
#define POSY    5       /* Position verticale de la fenêtre */


#endif