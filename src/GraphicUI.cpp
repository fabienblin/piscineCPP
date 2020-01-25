/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   GraphicUI.cpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 20:12:02 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/25 16:19:10 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "GraphicUI.hpp"

wxIMPLEMENT_APP(GraphicUI);

GraphicUI::GraphicUI(/* args */)
{
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

void GraphicUI::display(std::vector<IMonitorModule *> modules)
{
    (void)modules;
    // std::vector<IMonitorModule *>::iterator module = modules.begin();

    // for (std::vector<WINDOW *>::iterator it = windows.begin(); it != windows.end() && module != modules.end(); it++, module++)
    // {
    //     // CODE HERE
    // }
}

void GraphicUI::refresh(std::vector<IMonitorModule *> modules)
{
    (void)modules;
    // std::vector<IMonitorModule *>::iterator module = this->modules.begin();

    // for (std::vector<WINDOW *>::iterator it = windows.begin(); it != windows.end(); it++, module++)
    // {
    //     // CODE HERE
    // }
}

bool GraphicUI::OnInit()
{
    Frame *frame = new Frame("Rush00", wxPoint(50, 50), wxSize(450, 340));
    frame->Show(true);
    return true;
}