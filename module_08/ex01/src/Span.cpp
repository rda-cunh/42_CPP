/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 07:41:18 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/09/01 07:55:56 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() :_maxContainer(0), _listNum()
{
    std::cout << "Span: default constructor called." << std::endl;
}

Span::Span(unsigned int N): _maxContainer(N), _listNum()
{
    std::cout << "Span: constructor called." << std::endl;
}

Span::Span(const Span &other)
{
    *this = other;
    std::cout << "Span: copy constructor called." << std::endl;
}

Span &Span::operator=(const Span &other)
{
    std::cout << "Span: copy assignment operator called." << std::endl;
    if (this == &other)
        return (*this);
    this->_maxContainer = other._maxContainer;
    this->_listNum = other._listNum;
    return (*this);
}

Span::~Span()
{
    std::cout << "Span: copy destructor called." << std::endl;
}

void Span::addNumber(int number)
{
    this->_listNum.push_back(number);
}


int Span::longestSpan()
{
    if (this->_maxContainer <= 1)
        throw maxException;

    std::vector<int>::const_iterator it_max;
    std::vector<int>::const_iterator it_min;
    it_max = std::max_element(this->_listNum.begin(), this->_listNum.end());
    it_min = std::min_element(this->_listNum.begin(), this->_listNum.end());

    return (*it_max - *it_min);
}

int Span::shortestSpan()
{
    if (this->_maxContainer <= 1)
        throw maxException;
    
}