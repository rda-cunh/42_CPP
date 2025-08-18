/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 17:38:15 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/08/18 16:50:45 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <class T> 
Array<T>::Array() : _size(0)
{
    std::cout << "Array: default constructor called." << std::endl;
    this->_array = NULL;
}

template <class T> Array<T>::Array(unsigned int n) : _size(n)
{
    std::cout << "Array: constructor called." << std::endl;
    this->_array = new T[n]();
}

template <class T> 
Array<T>::Array(const Array &other) : _size(other._size)
{
    this->_array = new T[_size];
    for (unsigned int i = 0; i < _size; i++)
        this->_array[i] = other._array[i];
}

template <class T> 
Array<T> &Array<T>::operator=(const Array &other)
{
    if (this == &other)
        return (*this);
    delete[] this->_array;
    this->_size = other._size;
    this->_array = new T[this->_size];
    for (unsigned int i = 0; i < this->_size; i++)
        this->_array[i] = other._array[i];
    return (*this);
}

template <class T> 
Array<T>::~Array()
{
    std::cout << "Array: destructor called." << std::endl;
    delete[] this->_array;
}

template <class T> 
unsigned int Array<T>::size() const {return this->_size; }

template <class T> 
T &Array<T>::operator[](unsigned int i)
{
    if (i >= this->_size)
        throw OutOfRange();
    return (this->_array[i]);
}

template <class T> 
const char *Array<T>::OutOfRange::what() const throw()
{
    return ("Out of range index.");
}

