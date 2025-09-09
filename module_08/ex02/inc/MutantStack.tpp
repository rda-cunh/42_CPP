/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 07:54:59 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/09/09 19:18:04 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T, typename C>
MutantStack<T, C>::MutantStack()
{
    //    std::cout << "MutantStack: default constructor called." << std::endl;
}

template <typename T, typename C>
MutantStack<T, C>::MutantStack(const MutantStack &other)
{
    //    std::cout << "MutantStack: copy constructor called." << std::endl;
    *this = other;
}

template <typename T, typename C>
MutantStack<T, C> &MutantStack<T, C>::operator=(const MutantStack &other)
{
    //    std::cout << "MutantStack: copy assignement operator called." << std::endl;
    if (this == &other)
        return (*this);
    std::stack<T, C>::operator=(other);
    return (*this);
}

template <typename T, typename C>
MutantStack<T, C>::~MutantStack()
{
    //    std::cout << "MutantStack: destructor called." << std::endl;
}

template <typename T, typename C>
typename MutantStack<T, C>::iterator MutantStack<T, C>::begin()
{
    return (this->c.begin());
}

template <typename T, typename C>
typename MutantStack<T, C>::iterator MutantStack<T, C>::end()
{
    return (this->c.end());
}

template <typename T, typename C>
typename MutantStack<T, C>::const_iterator MutantStack<T, C>::begin() const
{
    return (this->c.begin());
}

template <typename T, typename C>
typename MutantStack<T, C>::const_iterator MutantStack<T, C>::end() const
{
    return (this->c.end());
}
