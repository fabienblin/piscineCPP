/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Module.cpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 15:04:29 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 15:27:23 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Module.hpp"

Module::Module(/* args */)
{
}

Module::~Module()
{
}

Module::Module(Module & m)
{
    *this = m;
}

Module & Module::operator=(Module const & m)
{
    (void)m;
    return *this;
}