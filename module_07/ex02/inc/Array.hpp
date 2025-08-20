/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 17:37:37 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/08/20 08:22:31 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>

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

        unsigned int size() const;                  //method to get the size of the array

        T &operator[](unsigned int i);              //operator overloading to allow access to the element i of the array
        T const &operator[](unsigned int i) const;  //operator overloading to allow only access (and no modify) to the element of a const array

        class OutOfRange : public std::exception    //exception for accessing an element of ouf the array range
        {
            const char *what() const throw();
        };
        
};

#include "Array.tpp"

#endif
