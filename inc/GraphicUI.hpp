/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   GraphicUI.hpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 15:07:20 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/25 14:50:58 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef GRAPHICUI
#define GRAPHICUI

#include <wx/wx.h>

#include "IMonitorDisplay.hpp"
#include "Frame.hpp"

class GraphicUI : public IMonitorDisplay, public wxApp
{
private:
    virtual bool OnInit();
public:
    GraphicUI(/* args */);
    ~GraphicUI();
    GraphicUI & operator=(GraphicUI const &);
    GraphicUI(GraphicUI &);

    void display(std::vector<IMonitorModule *>);
    void refresh();
    
    virtual bool OnInit();
};

enum
{
    ID_Hello = 1
};



#endif