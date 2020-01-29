/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Character.hpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 17:37:17 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 19:13:37 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef CHARACTER
# define CHARACTER

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
private:
    std::string name;
    AWeapon * weapon;
    int ap;

public:
    Character(/* args */);
    ~Character();
    Character(const Character &);
	Character & operator=(const Character &);

    Character(std::string const &);
    void recoverAP();
    void equip(AWeapon *);
    void attack(Enemy *);
    std::string getName() const;
    int getAP() const;
    AWeapon * getWeapon() const;
};

std::ostream & operator<< (std::ostream & o, Character const & c);

#endif