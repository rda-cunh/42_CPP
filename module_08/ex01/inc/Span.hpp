/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 07:40:59 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/09/01 07:40:05 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

class Span
{
    private:
        unsigned int     _maxContainer;
        std::vector<int> _listNum;

    public:
        Span();
        Span(unsigned int N);
        Span(const Span &other);
        Span &operator=(const Span &other);
        ~Span();

        void addNumber(int number);

        int longestSpan();
        int shortestSpan();

        void addRandomNumbers(unsigned int quantity);
        
        class maxException : public std::exception
        {
            public:
                const char *what() const throw();
        };

        class noSpanException : public std::exception
        {
            public:
                const char *what() const throw();
        };
};