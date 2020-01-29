/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   span.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/23 16:49:02 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/23 21:13:58 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(/* args */)
{
}

Span::~Span()
{
}

Span::Span(Span const &s)
{
    *this = s;
}

Span &Span::operator=(Span const &s)
{
    (void)s;
    return *this;
}

Span::Span(unsigned int n)
{
    this->_n = n;
}

void Span::addNumber(int n)
{
    try
    {
        this->_lst.push_back(n);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}

int Span::shortestSpan()
{
    int span = std::numeric_limits<int>::max();
    int localSpan;
    try
    {
        for (std::vector<int>::iterator it = this->_lst.begin() + 1; it != this->_lst.end(); it++)
        {
            if ((localSpan = *it > *(it - 1) ? *it - *(it - 1) : *(it - 1) - *it) < span)
                span = localSpan;
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    return span;
}

int Span::longestSpan()
{
    int span = std::numeric_limits<int>::min();
    int localSpan;
    try
    {
        for (std::vector<int>::iterator it = this->_lst.begin() + 1; it != this->_lst.end(); it++)
        {
            if ((localSpan = *it > *(it - 1) ? *it - *(it - 1) : *(it - 1) - *it) > span)
                span = localSpan;
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    return span;
}