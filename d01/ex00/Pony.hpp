/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Pony.hpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 12:36:34 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 13:18:42 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

#include <string>
#include <iostream>

class Pony
{
private:
    std::string name;
    int age;
    
public:
    Pony();
    Pony(std::string name, int age);
    ~Pony();
};

#endif