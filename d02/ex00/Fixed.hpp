/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Fixed.hpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/15 13:08:11 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/15 15:00:58 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FIXED
# define FIXED

#include <iostream>

class Fixed
{
private:
    int fixPoint;
    static const int factoBits = 8;
    
public:
    Fixed();
    ~Fixed();
    
    Fixed(Fixed const & f);
    Fixed & operator=(Fixed const & f);
    int getRawBits() const;
    void setRawBits(int const raw);
};

#endif