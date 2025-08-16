/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 17:37:37 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/08/16 08:15:46 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>
#include "Array.tpp"

template <typename T>
class Array
{
    private:
        T           *_array;
        unsigned int _size;
        
    public:
        Array();
        Array(unsigned int n);
        Array(const Array &other);
        Array &operator=(const Array &other);
        ~Array();

        unsigned int size() const;  //method to get the size of the array;

        class OutOfRange : public std:exception     //exception for accessing an element of ouf the array range
        {
            const char *what() const throw();
        }
        
};

#endif
