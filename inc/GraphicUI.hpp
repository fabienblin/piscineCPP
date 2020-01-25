/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   GraphicUI.hpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 15:07:20 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/25 16:53:47 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef GRAPHICUI
#define GRAPHICUI

#include <wx/wx.h>
#include <vector>

#include "IMonitorDisplay.hpp"
#include "IMonitorModule.hpp"
#include "Frame.hpp"

class GraphicUI : public IMonitorDisplay, public wxApp
{
private:

public:
    GraphicUI(/* args */);
    ~GraphicUI();
    GraphicUI & operator=(GraphicUI const &);
    GraphicUI(GraphicUI &);

    void display(std::vector<IMonitorModule *>);
    void refresh(std::vector<IMonitorModule *>);
    
    virtual bool OnInit();
};


#endif