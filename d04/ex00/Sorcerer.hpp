/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Sorcerer.hpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 12:05:45 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 15:29:18 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef SORCERER
# define SORCERER

#include <iostream>
#include "Victim.hpp"

class Sorcerer
{
private:
    std::string name;
	std::string title;
	
public:
	Sorcerer();
	Sorcerer(const Sorcerer &);
	~Sorcerer();
	Sorcerer &operator=(const Sorcerer &);

	Sorcerer(std::string, std::string);
	void intro();
	void polymorph(Victim const &) const;
	std::string getName() const;
	std::string getTitle() const;
};

std::ostream & operator<<(std::ostream & o, Sorcerer const & s);

#endif