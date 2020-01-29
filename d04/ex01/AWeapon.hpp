/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   AWeapon.hpp                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 12:05:45 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 17:32:22 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef AWEAPON
#define AWEAPON

#include <iostream>

class AWeapon
{
protected:
    std::string name;
    int damage;
    int ap;
    
public:
    AWeapon();
    AWeapon(const AWeapon &);
    virtual ~AWeapon();
    AWeapon &operator=(const AWeapon &);

    AWeapon(std::string const & name, int apcost, int damage);
    std::string getName() const;
    int getAPCost() const;
    int getDamage() const;
    std::string getOut() const;
    virtual void attack() const = 0;
};

#endif