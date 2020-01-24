/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   DateModule.cpp                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/24 15:38:42 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/24 20:54:55 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "DateModule.hpp"

/* Canonical */
DateModule::DateModule(void)
{
	this->updateData();
}

DateModule::~DateModule(void)
{
}

DateModule &DateModule::operator=(DateModule const &copy)
{
	if (this != &copy)
	{
	}
	return (*this);
}

DateModule::DateModule(DateModule const &copy)
{
	*this = copy;
}

/* Interface methods */

void	DateModule::verif_data(void) const
{
/*	if (!this->_date)
		throw std::exception();*/
}

void DateModule::updateData(void)
{
	time_t now = time(0);

	// convert now to string form
	char *dt = ctime(&now);

	this->_date = std::string(dt);
}
	
std::string DateModule::getData(void) const
{
	return std::string("The local date and time is: " + this->_date);
}

const std::string DateModule::name = "Date";