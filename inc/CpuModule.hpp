/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   CpuModule.hpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/24 17:10:53 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/25 14:07:25 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef CPUMODULE_HPP_
#define CPUMODULE_HPP_

#include "IMonitorModule.hpp"

#include <sys/types.h>
#include <sys/sysctl.h>

class CpuModule : public IMonitorModule
{
	private:
		std::string	_cpu;
		bool	_isInit;

	public:
		static const std::string name;

		/* Canonical */
		CpuModule(void);
		~CpuModule(void);
		CpuModule &operator=(CpuModule const &);
		CpuModule(CpuModule const &);

		//    CpuModule(/* args */);

		/* Interface methods */
		virtual void updateData(void);
		virtual std::string getData(void) const;
		virtual	void	verif_data(void) const;
		
};

#endif 