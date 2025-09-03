/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 07:41:18 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/09/03 07:52:49 by rda-cunh         ###   ########.fr       */
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
    if (this->_listNum.size() >= this->_maxContainer)
        throw Span::maxException();
    this->_listNum.push_back(number);
}


int Span::longestSpan()
{
    if (this->_listNum.size() <= 1)
        throw Span::noSpanException();

    std::vector<int>::const_iterator it_max;
    std::vector<int>::const_iterator it_min;
    it_max = std::max_element(this->_listNum.begin(), this->_listNum.end());
    it_min = std::min_element(this->_listNum.begin(), this->_listNum.end());

    return (*it_max - *it_min);
}

int Span::shortestSpan()
{
    if (this->_listNum.size() <= 1)
        throw Span::noSpanException();
       
    std::sort(this->_listNum.begin(), this->_listNum.end());
    
    std::vector<int>::iterator it = this->_listNum.begin();
    int diff = abs(*it - *(it+1));
    while (it != this->_listNum.end())
    {
        if (abs(*it - *(it+1)) < diff)
            diff = abs(*it - *(it+1));
        it++;
    }
    
    return (diff);
}

void Span::addRandomNumbers(unsigned int quantity)
{
    std::srand(static_cast<unsigned int>(std::time(NULL)));
    for (unsigned int i = 0; i < quantity; i++) 
    {
        int num = rand();
        Span::addNumber(num);
        std::cout << "Random number " << num << "added." << std::endl;
    }
}

const char *Span::maxException::what() const throw()
{
    return ("Exception: Max number of the container already achieved.");
}

const char *Span::noSpanException::what() const throw()
{
    return ("Exception: Impossible to calculate span.");
}