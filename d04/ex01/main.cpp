/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 12:44:55 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 21:12:05 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int main()
{
Character* zaz = new Character("zaz");

std::cout << *zaz;

Enemy* b = new RadScorpion();

AWeapon* pr = new PlasmaRifle();
AWeapon* pf = new PowerFist();

zaz->equip(pr);
std::cout << *zaz;
zaz->equip(pf);

zaz->attack(b);
std::cout << *zaz;
zaz->equip(pr);
std::cout << *zaz;
zaz->attack(b);
std::cout << *zaz;
zaz->attack(b);
std::cout << *zaz;
return 0;
}
