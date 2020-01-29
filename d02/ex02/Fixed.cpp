/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Fixed.cpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/15 13:08:19 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/15 20:53:24 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    // std::cout << "Default constructor called" << std::endl;
    this->fixPoint = 0;
}

Fixed::~Fixed()
{
    // std::cout << "Default destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &f)
{
    // std::cout << "Copy constructor called" << std::endl;
    setRawBits(f.getRawBits());
}

Fixed::Fixed(int const f)
{
    // std::cout << "Int constructor called" << std::endl;
    setRawBits(f << this->factoBits);
}

Fixed::Fixed(float const f)
{
    // std::cout << "Float constructor called" << std::endl;
    setRawBits(roundf(f * (1 << this->factoBits)));
}

Fixed &Fixed::operator=(Fixed const &f)
{
    // std::cout << "Assignation operator called" << std::endl;
    this->setRawBits(f.getRawBits());
    return *this;
}

std::ostream &operator<<(std::ostream &o, Fixed const &f)
{
    // std::cout << "Assignation operator called" << std::endl;
    o << f.toFloat();
    return o;
}

int Fixed::getRawBits() const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return this->fixPoint;
}

void Fixed::setRawBits(int const raw)
{
    // std::cout << "setRawBits member function called" << std::endl;
    this->fixPoint = raw;
}

float Fixed::toFloat() const
{
    // std::cout << "toFloat member function called" << std::endl;
    return ((float)getRawBits() / (1 << this->factoBits));
}

int Fixed::toInt() const
{
    // std::cout << "toInt member function called" << std::endl;
    return this->fixPoint >> this->factoBits;
}

bool Fixed::operator>(Fixed const &f)
{
    return (this->getRawBits() > f.getRawBits());
}

bool Fixed::operator<(Fixed const &f)
{
    return (this->getRawBits() < f.getRawBits());
}

bool Fixed::operator<=(Fixed const &f)
{
    return (this->getRawBits() <= f.getRawBits());
}

bool Fixed::operator>=(Fixed const &f)
{
    return (this->getRawBits() >= f.getRawBits());
}

bool Fixed::operator==(Fixed const &f)
{
    return (this->getRawBits() == f.getRawBits());
}

bool Fixed::operator!=(Fixed const &f)
{
    return (this->getRawBits() != f.getRawBits());
}

Fixed Fixed::operator+ (const Fixed &f)
{
   return Fixed(toInt() + f.toInt());
}
Fixed Fixed::operator- (const Fixed &f)
{
   return Fixed(toFloat() - f.toFloat());
}
Fixed Fixed::operator* (const Fixed &f)
{
   return Fixed(toFloat() * f.toFloat());
}
Fixed Fixed::operator/ (const Fixed &f)
{
   return Fixed(toFloat() / f.toFloat());
}

Fixed & Fixed::operator++()
{
    setRawBits(getRawBits() + 1);
    return *this;
}

Fixed Fixed::operator++(int n)
{
    (void)n;
    Fixed tmp(*this);
    ++*this;
    return tmp;
}

Fixed & Fixed::operator--()
{
    setRawBits(getRawBits() - 1);
    return *this;
}

Fixed Fixed::operator--(int n)
{
    (void)n;
    Fixed tmp(*this);
    --*this;
    return tmp;
}

Fixed& Fixed::min(Fixed &fOne, Fixed &fTwo)
{
    if (fOne > fTwo)
        return (fTwo);
    else
        return (fOne);
}
const Fixed& Fixed::min(const Fixed &fOne, const Fixed &fTwo)
{
    if ((Fixed &)fOne > (Fixed &)fTwo)
        return (fTwo);
    else
        return (fOne);
}
Fixed& Fixed::max(Fixed &fOne, Fixed &fTwo)
{
     if (fOne < fTwo)
        return (fTwo);
    else
        return (fOne);
}
const Fixed& Fixed::max(const Fixed &fOne, const Fixed &fTwo)
{
     if ((Fixed &)fOne < (Fixed &)fTwo)
        return (fTwo);
    else
        return (fOne);
}