/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Fixed.hpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/15 13:08:11 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/16 13:09:52 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FIXED
# define FIXED

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int fixPoint;
    static const int factoBits = 8;
    
public:
    Fixed   ();
    ~Fixed  ();
    
    Fixed   (Fixed  const & f);
    Fixed   (int    const   f);
    Fixed   (float  const   f);

    Fixed &         operator=   (Fixed const & rhs);

    int     getRawBits  () const;
    void    setRawBits  (int const raw);

    float   toFloat     () const;
    int     toInt       () const;
};

std::ostream & operator<< (std::ostream & o, Fixed const & f);

#endif

