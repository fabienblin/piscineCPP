/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Array.hpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/22 14:11:18 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/23 13:38:05 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef ARRAY
#define ARRAY

#include <iostream>

template <typename T>
class Array
{
private :
    T * a;
    unsigned int n;

public :
    Array <T> (){}

    ~Array <T> (){}

    Array <T> & operator= (const Array <T> & a)
    {
        this->a = a.a;
        return *this;
    }

    Array <T> (Array <T> const & a)
    {
        *this = a;
    }

    Array <T> (unsigned int n)
    {
        this->a = new T[n];
        this->n = n;
    }

    T & operator[] (unsigned int i) const
    {
        try
        {
            return this->a[i];
        }
        catch (std::exception e)
        {
            throw(e);
        }
    }

    void size () const
    {
        return this->n;
    }
};

#endif