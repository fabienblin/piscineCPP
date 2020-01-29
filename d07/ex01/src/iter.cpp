/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   iter.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/13 13:01:12 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/22 13:50:25 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void f(T const & t)
{
  std::cout << t << std::endl;
}

template <typename T>
void iter(T * array, int len, void (*f)(T const &))
{
  for (int i = 0; i < len; i++)
  {
    f(array[i]);
  }
}

int main()
{
  const int len = 3;

  std::string array1[len] = {"aaa", "bbb", "cccp"};
  iter(array1, len, f);

  int array2[len] = {1, 2, 3};
  iter(array2, len, f);
  
  return 0;
}