/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/13 13:01:12 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 17:15:13 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main (){
  ZombieEvent ze;

  ze.setZombieType("Gros");
  Zombie *z = ze.newZombie("Philippe");
  z->announce();
  delete(z);

  ze.setZombieType("Random");
  Zombie *randomZ = ze.randomChump();
  randomZ->announce();
  delete(randomZ);
  
  return 0;
}