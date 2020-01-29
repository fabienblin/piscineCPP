/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Victim.hpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 12:05:45 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 15:57:45 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef VICTIM
# define VICTIM

#include <iostream>

class Victim
{
protected:
    std::string name;
	
public:
	Victim();
	Victim(const Victim &);
	~Victim();
	Victim &operator=(const Victim &);

	Victim(std::string);
	virtual void getPolymorphed();
	std::string getName() const;
};

std::ostream & operator<<(std::ostream & o, Victim const & s);

#endif