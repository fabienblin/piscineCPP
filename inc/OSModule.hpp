/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   OSModule.hpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/24 15:58:59 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/24 21:06:28 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef OSMODULE_HPP_
#define OSMODULE_HPP_

#include <sys/utsname.h>

#include "IMonitorModule.hpp"

class OSModule : public IMonitorModule
{
	private:
		struct utsname	_osStruct;
	public:
		static const std::string name;

		/* Canonical */
		OSModule(void);
		~OSModule(void);
		OSModule &operator=(OSModule const &);
		OSModule(OSModule const &);

		//    OSModule(/* args */);

		/* Interface methods */
		virtual void	updateData(void);
		virtual std::string getData(void) const;
		virtual	void	verif_data(void) const;
};

#endif 