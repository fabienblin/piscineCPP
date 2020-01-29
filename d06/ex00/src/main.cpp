/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/13 13:01:12 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/21 17:56:23 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

void castChar(const char * c)
{
  double d = atof(c);
  std::cout << "char: ";

  bool inf = (!strcmp("inf", c) || !strcmp("+inf", c) || !strcmp("-inf", c));
  bool nan = (!strcmp("nan", c));

  if ((d >= 33 && d <= 126))
    std::cout << "'" << static_cast<char>(d) << "'" << std::endl;
  else if (inf || nan || 0 > d || 255 < d)
    std::cout << "impossible" << std::endl;
  else
    std::cout << "Non displayable" << std::endl;
}

void castInt(const char * c)
{
  double d = atof(c);
  std::cout << "int: ";

  bool inf = (!strcmp("inf", c) || !strcmp("+inf", c) || !strcmp("-inf", c));
  bool nan = (!strcmp("nan", c));

  if (inf || nan)
    std::cout << "impossible" << std::endl;
  else
    std::cout << static_cast<int>(d) << std::endl;
}

void castFloat(const char * c)
{
  double d = atof(c);
  std::cout << "float: ";

  std::cout << std::fixed << std::setprecision(1) << static_cast<float>(d) << "f" << std::endl;
}

void castDouble(const char * c)
{
  double d = atof(c);
  std::cout << "double: ";

  std::cout << std::fixed << std::setprecision(1) << static_cast<double>(d) << std::endl;
}

int main(int argc, char *argv[])
{
  /*
  char: Non displayable
  int: 0
  float: 0.0f
  double: 0.0
*/
  if (argc == 2)
  {
    castChar(argv[1]);
    castInt(argv[1]);
    castFloat(argv[1]);
    castDouble(argv[1]);
  }
  else
  {
    std::cout << "Only one input is authorized." << std::endl;
  }
  
  return 0;
}