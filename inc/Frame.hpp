/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Frame.hpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/24 21:38:21 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/25 15:59:18 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FRAME
#define FRAME

#include <wx/wx.h>

class Frame : public wxFrame
{
private:
    wxDECLARE_EVENT_TABLE();

public:
    Frame(/* args */);
    ~Frame();
    Frame(Frame const &);
    Frame & operator=(Frame const &);

    Frame(const wxString &title, const wxPoint &pos, const wxSize &size);
    void OnHello(wxCommandEvent &event);
    void OnExit(wxCommandEvent &event);
    void OnAbout(wxCommandEvent &event);
};


#endif