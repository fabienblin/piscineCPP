/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   IMonitorModule.hpp                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 15:07:20 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/24 15:11:04 by fablin      ###    #+. /#+    ###.fr     */
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
    virtual std::string getInfo() = 0;
};


#endif