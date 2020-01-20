/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   GraphicUI.hpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 15:07:20 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 20:30:19 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef GRAPHICUI
#define GRAPHICUI

#include "IMonitorDisplay.hpp"

class GraphicUI : IMonitorDisplay
{
private:
    
public:
    GraphicUI(/* args */);
    ~GraphicUI();
    GraphicUI & operator=(GraphicUI const &);
    GraphicUI(GraphicUI &);

};


#endif