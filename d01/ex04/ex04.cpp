/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ex04.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/13 13:01:12 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 17:33:05 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main (){
  std::string * ptr = new std::string("HI THIS IS BRAIN");
  std::string & ref = *ptr;

  std::cout << *ptr << std::endl;
  std::cout << ref << std::endl;
  return 0;
}