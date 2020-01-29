/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   HumanA.hpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 22:09:12 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 22:18:23 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */


#ifndef HUMAN_A_H
#define HUMAN_A_H

#include <iostream>
#include <string.h>
#include <sstream>
#include <iomanip>
#include "Weapon.hpp"


class HumanA
{
    public:
        HumanA(std::string _name, Weapon &weapon);
        ~HumanA();
        void attack();
      
    private:
    std::string name;
    Weapon &weapon;
};

#endif