/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 07:38:13 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/08/31 15:37:01 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>

template<typename T>
void easyfind(const T &container, int value);

class valueNotFound : public std::exception
{
    virtual const char *what() const throw();
};

#include "easyfind.tpp"
