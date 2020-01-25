/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Frame.cpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/24 21:37:55 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/25 15:57:11 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Frame.hpp"

Frame::Frame(/* args */)
{

}

Frame::~Frame()
{
}

Frame &Frame::operator=(Frame const &g)
{
    (void)g;
    return *this;
}

Frame::Frame(Frame const & g)
{
    *this = g;
}

Frame::Frame(const wxString &title, const wxPoint &pos, const wxSize &size)
    : wxFrame(NULL, wxID_ANY, title, pos, size)
{
    Centre();
}


