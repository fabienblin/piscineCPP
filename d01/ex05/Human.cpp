/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Human.cpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 17:44:01 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 19:32:02 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Human.hpp"

std::string Human::identify() const
{
    return this->_brain.identify();
}

const Brain &Human::getBrain() const
{
    return this->_brain;
}

Human::Human():_brain(Brain())
{

}

Human::~Human()
{
}