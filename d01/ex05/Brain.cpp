/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Brain.cpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 17:43:42 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 19:44:22 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Brain.hpp"

std::string Brain::identify() const
{
    std::stringstream ref;
    
    ref << this; 
    return ref.str();
}

Brain::Brain()
{
}

Brain::~Brain()
{
}
