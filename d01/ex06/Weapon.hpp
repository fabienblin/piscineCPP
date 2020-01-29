/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Weapon.hpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 22:08:59 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 22:09:00 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string.h>
#include <sstream>
#include <iomanip>

class Weapon
{
    public:
        Weapon(std::string _type);
        ~Weapon();
        const std::string getType() const;
        void setType(std::string _type);
      
    private:
     std::string type;
      
};

#endif