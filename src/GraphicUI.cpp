/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   GraphicUI.cpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 20:12:02 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/25 14:42:29 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "GraphicUI.hpp"

GraphicUI::GraphicUI(/* args */)
{
    wxIMPLEMENT_APP(GraphicUI);
}

GraphicUI::~GraphicUI()
{
}

GraphicUI &GraphicUI::operator=(GraphicUI const &g)
{
    (void)g;
    return *this;
}

GraphicUI::GraphicUI(GraphicUI &g)
{
    *this = g;
}

bool GraphicUI::OnInit()
{
    Frame *frame = new Frame("Hello World", wxPoint(50, 50), wxSize(450, 340));
    frame->Show(true);
    return true;
}