/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 16:05:42 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/09/25 19:34:38 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stack>
#include <cstdlib>
#include <cctype>

class RPN
{
private:
    std::string _input;
    std::stack<float> _stack;
    RPN();

public:
    RPN(char *input);
    RPN(const RPN &other);
    RPN &operator=(const RPN &other);
    ~RPN();

    class DivisionByZero : public std::exception
    {
        const char *what() const throw();
    };

    class NotEnoughOperands : public std::exception
    {
        const char *what() const throw();
    };

    class NotEnoughOperators : public std::exception
    {
        const char *what() const throw();
    };

    class WrongCharactersFound : public std::exception
    {
        const char *what() const throw();
    };
};
