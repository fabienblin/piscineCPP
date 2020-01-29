/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   PlasmaRifle.hpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 12:05:45 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 17:30:51 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef PLASMARIFLE
# define PLASMARIFLE

#include <iostream>
#include "AWeapon.hpp"

class PlasmaRifle:public AWeapon
{
private:
    /* data */
public:
	PlasmaRifle();
	PlasmaRifle(const PlasmaRifle &);
	~PlasmaRifle();
	PlasmaRifle & operator=(const PlasmaRifle &);

	void attack() const;
};

#endif