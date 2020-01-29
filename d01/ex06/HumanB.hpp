/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   HumanB.hpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 22:09:04 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 22:13:10 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef HUMAN_B_H
#define HUMAN_B_H

#include <iostream>
#include <string.h>
#include <sstream>
#include <iomanip>
#include "Weapon.hpp"
#define GREEN   "\033[32m"
#define RESET   "\033[0m"

class HumanB
{
    public:
        HumanB(std::string name);
        ~HumanB();
        void attack();
        void setWeapon(Weapon &weapon);
      
    private:
    std::string name;
    Weapon *weapon;
      
};

#endif