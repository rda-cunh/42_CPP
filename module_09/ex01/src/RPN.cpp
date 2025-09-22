/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 16:05:32 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/09/22 18:23:22 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(char *input) : _input(input)
{
    float a;
    float b;

    for (int i = 0; i < _input.size(); i++)
    {
        if (std::isdigit(_input[i]))
            this->_stack.push(std::strtof(&_input[i], NULL));
        else if (_input.std::string::find_first_of("+-*/", i) == i)
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
            else if (_input[i] == '-')
        }
    }
}
