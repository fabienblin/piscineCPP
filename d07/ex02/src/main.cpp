/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/13 13:01:12 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/22 17:41:26 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
  Array<char> array (1);
  array[0] = '1';

  // affiche 1
  std::cout << array[0] << std::endl;

  // throw exception donc rien ne s'affiche
  std::cout << array[1] << std::endl;
  return 0;
}