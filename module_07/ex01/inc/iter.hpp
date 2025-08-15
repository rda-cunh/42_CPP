/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 16:57:56 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/08/15 16:48:57 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <cstddef>

template <typename T>
void iter(T *arrayAdress, size_t arrayLen, void(*function)(T&))
{
    for(size_t i = 0; i < arrayLen; i++)
        function(arrayAdress[i]);
}

#endif