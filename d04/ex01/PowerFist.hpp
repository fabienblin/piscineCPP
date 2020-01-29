/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   PowerFist.hpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 12:05:45 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 17:33:36 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef POWERFIST
# define POWERFIST

#include <iostream>
#include "AWeapon.hpp"

class PowerFist:public AWeapon
{
private:
    /* data */
public:
	PowerFist();
	PowerFist(const PowerFist &);
	~PowerFist();
	PowerFist & operator=(const PowerFist &);

	void attack() const;
};


#endif