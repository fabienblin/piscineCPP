/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/13 13:01:12 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/22 20:06:21 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <sstream>
#include <string>

struct Data
{
  std::string s1;
  int n;
  std::string s2;
};

std::string randomStr8()
{
  std::string alnum = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvWxyz0123456789";
  std::stringstream ss;
  for (int i = 0; i < 8; i++)
    ss << alnum[rand() % alnum.length()];
    
  return * new std::string(ss.str());
}

std::string randomInt()
{
  std::stringstream ss; 
  ss << static_cast<char>(rand());
  return * new std::string(ss.str());
}

void * serialize()
{
  char * serial = new char[17];
  try {
    strcpy(serial, randomStr8().c_str());
    strcpy(serial+8, randomInt().c_str());
    strcpy(serial+9, randomStr8().c_str());

    return reinterpret_cast<void *>(serial);
  }
  catch (std::exception e)
  {
    throw(e);
  }
}

Data * deserialize(void * raw)
{
  Data * d = new Data();
  
  std::string str = reinterpret_cast<char *>(raw);
  d->s1 = str.substr(0, 8);
  d->n += str[8];
  d->s2 = str.substr(9);
  
  return d;
}

int main()
{
  srand(time(nullptr));
  void * serial = serialize();

  std::cout << "Serialize : " << std::endl;
  std::cout << (char *)serial << std::endl <<std::endl;

  std::cout << "Deserialize : " << std::endl;
  std::cout << "s1 :" << deserialize(serial)->s1 << std::endl;
  std::cout << "n :" << deserialize(serial)->n << " or " << (char)deserialize(serial)->n << std::endl;
  std::cout << "s2 :" << deserialize(serial)->s2 << std::endl;
  return 0;
}