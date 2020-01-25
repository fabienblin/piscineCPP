/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   GraphicUI.cpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 20:12:02 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/25 10:32:44 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "GraphicUI.hpp"

GraphicUI::GraphicUI(/* args */)
{
}

GraphicUI::~GraphicUI()
{
}

GraphicUI & GraphicUI::operator=(GraphicUI const & g)
{
	(void)g;
	return *this;
}

GraphicUI::GraphicUI(GraphicUI & g)
{
	*this = g;
}

/* function member */
void display(std::string)
{
}

void init()
{
}

void refresh()
{
}

void print(std::string)
{
}
