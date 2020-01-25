/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   GraphicUI.cpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 20:12:02 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/25 11:17:04 by kcabus      ###    #+. /#+    ###.fr     */
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
void GraphicUI::display(std::vector<IMonitorModule *>)
{
}

void GraphicUI::init()
{
}

void GraphicUI::refresh()
{
}

void GraphicUI::print(std::string)
{
}
