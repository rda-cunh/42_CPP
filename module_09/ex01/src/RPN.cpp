/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 16:05:32 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/09/23 19:27:59 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(char *input) : _input(input)
{
    float a;
    float b;

    for (size_t i = 0; i < _input.size(); i++)
    {
        if (std::isdigit(_input[i]))
            this->_stack.push(std::strtof(&_input[i], NULL));
        else if (_input.std::string::find_first_of("+-/*", i) == i)
        {
            if (this->_stack.size() < 2)
                throw NotEnoughOperands();
            b = this->_stack.top();
            this->_stack.pop();
            a = this->_stack.top();
            this->_stack.pop();

            if (_input[i] == '+')
                this->_stack.push(a + b);
            else if (_input[i] == '-')
                this->_stack.push(a - b);
            else if (_input[i] == '/')
            {
                if (b == 0)
                    throw DivisionByZero();
                this->_stack.push(a / b);
            }
            else if (_input[i] == '*')
                this->_stack.push(a * b);
        }
    }
    if (_stack.size() != 1)
        throw NotEnoughOperators();
    std::cout << "The result is: " << _stack.top() << std::endl;
}

RPN::RPN(const RPN &other)
{
    *this = other;
}

RPN &RPN::operator=(const RPN &other)
{
    if (this == &other)
        return (*this);
    this->_input = other._input;
    this->_stack = other._stack;
    return (*this);
}

RPN::~RPN() {}

const char *RPN::DivisionByZero::what() const throw()
{
    return ("Error: Division by zero is not possible.");
}

const char *RPN::NotEnoughOperands::what() const throw()
{
    return ("Error: Not enough operands.");
}

const char *RPN::NotEnoughOperators::what() const throw()
{
    return ("Error: Not enough operators.");
}