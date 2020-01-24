/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   CpuModule.cpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/24 17:10:48 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/24 17:59:18 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */
#include "CpuModule.hpp"

/* Canonical */
CpuModule::CpuModule(void)
{
	this->updateData();
}

CpuModule::~CpuModule(void)
{

}

CpuModule &CpuModule::operator=(CpuModule const &copy)
{
	if (this != &copy)
	{
		this->_cpu = copy._cpu;
	}
	return (*this);
}

CpuModule::CpuModule(CpuModule const &copy)
{
	*this = copy;
}

/* Interface methods */

void	CpuModule::verif_data(void) const
{
//	if (!this->_cpu)
//		throw std::exception();
}

void CpuModule::updateData(void)
{
	/*//nb cores
	int count;
	size_t count_len = sizeof(count);
	sysctlbyname("hw.logicalcpu", &count, &count_len, NULL, 0);
	fprintf(stderr,"you have %i cpu cores", count);
	//clock speed
        int mib[2];
        unsigned int freq;
        size_t len;

        mib[0] = CTL_HW;
        mib[1] = HW_CPU_FREQ;
        len = sizeof(freq);
        sysctl(mib, 2, &freq, &len, NULL, 0);*/
		
	//Intel(R) Core(TM) i7-2600 CPU @ 3.40GHz
	char buffer[128];
    size_t bufferlen = 128;
    sysctlbyname("machdep.cpu.brand_string",&buffer,&bufferlen,NULL,0);
	this->_cpu = std::string(buffer);
  //  printf("%s\n", buffer);
}
	
std::string CpuModule::getData(void) const
{
	return std::string(this->_cpu);
}

const std::string CpuModule::name = "CPU Information";