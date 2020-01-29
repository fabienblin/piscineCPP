/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Peon.hpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 12:05:45 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 15:56:23 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef PEON
#define PEON

#include <iostream>
#include "Victim.hpp"

class Peon: public Victim
{
public:
    Peon();
    Peon(const Peon &);
    ~Peon();
    Peon &operator=(const Peon &);

    Peon(std::string);
    void getPolymorphed();
};

#endif