/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   span.hpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/23 16:49:40 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/23 21:14:28 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <limits>
#include <time.h>
#include <random>

class Span
{
public:
    Span(unsigned int);
    Span();
    ~Span();
    Span(const Span &);
    Span &operator=(Span const &);
    void addNumber(int);
    int shortestSpan();
    int longestSpan();
private:
    unsigned int _n;
    std::vector<int> _lst;
};

#endif