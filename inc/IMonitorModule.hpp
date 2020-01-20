/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   IMonitorModule.hpp                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 15:07:20 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 17:09:03 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef IMONITORMODULE
#define IMONITORMODULE

class IMonitorModule
{
private:
    /* data */
    
public:
    IMonitorModule(/* args */);
    virtual ~IMonitorModule();
    virtual IMonitorModule & operator=(IMonitorModule const &) = 0;
    IMonitorModule(IMonitorModule &);
};


#endif