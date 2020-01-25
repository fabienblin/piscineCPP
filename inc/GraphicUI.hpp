/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   GraphicUI.hpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 15:07:20 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/25 14:58:09 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef GRAPHICUI
#define GRAPHICUI

#include "IMonitorDisplay.hpp"

class GraphicUI : public IMonitorDisplay
{
private:
    
public:
    GraphicUI(/* args */);
    ~GraphicUI();
    GraphicUI & operator=(GraphicUI const &);
    GraphicUI(GraphicUI &);

    virtual void display(std::vector<IMonitorModule *>);
    virtual void init();
    virtual void refresh();
    virtual void print(std::string);
};


#endif