/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Wave.hpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/19 18:48:48 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/19 19:22:10 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Enemy.hpp"

class Wave
{
private:
    int nbEnemies;
    Enemy *wave[50];

public:
    Wave(/* args */);
    ~Wave();
    Wave &operator=(Wave const &);
    Wave(Wave &);

    Wave(int);
    Enemy * getEnemy(int);
    int getNbEnemies();
};
