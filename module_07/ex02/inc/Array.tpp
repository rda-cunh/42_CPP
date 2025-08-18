/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 17:38:15 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/08/18 08:29:11 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <class T> Array<T>::Array() : _size(0)
{
    std::cout << "Array: default constructor called." << std::endl;
    this->_array = new T(0);
}

template <class T> Array<T>::Array(unsigned int n) : _size(n)
{
    std::cout << "Array: constructor called." << std::endl;
    this->_array = new T(n);
}

template <class T> Array<T>::Array(const Array &other)
{
    this->_array = new T[other.size()];
    for (unsigned int i = 0; i < other.size(); i++)
        this->_array[i] = other._array[i];
    this->_size = other._size;
}

template <class T> Array<T> &Array<T>::operator=(const Array &other)
{
    if (this == &other)
        return (*this);
    delete this->_array;
    this->_array = new T[other.size()];
    for (unsigned int i; i < other.size(); i++)
        this->_array[i] = other._array[i];
    this->_size = other._size;
    return (*this);
}

template <class T> Array<T>::~Array()
{
    std::cout << "Array: destructor called." << std::endl;
    delete[] this->_array;
}

template <class T> unsigned int Array<T>::size() const {return this->_size; }

template <class T> T &Array<T>::operator[](unsigned int i)
{
    if (i > this->_size)
        throw OutOfRange();
    return (this->_array[i]);
}

template <class T> const char *Array<T>::OutOfRange::what() const throw()
{
    return ("Out of range Index.");
}

