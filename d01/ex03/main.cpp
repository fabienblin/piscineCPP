/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/13 13:01:12 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 17:37:06 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main (){
  ZombieHorde * Horde = new ZombieHorde(10);
  Horde->announce();
  return 0;
}