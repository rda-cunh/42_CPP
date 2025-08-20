/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 16:57:56 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/08/20 07:53:32 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <cstddef>

//non-const overload template (function takes T&)
template <typename T>
void iter(T *arrayAdress, size_t arrayLen, void(*function)(T&))
{
    for(size_t i = 0; i < arrayLen; i++)
        function(arrayAdress[i]);
}

//const overload template (function takes T const&)
template <typename T>
void iter(T const *arrayAdress, size_t arrayLen, void(*function)(T const&)) 
{
    for(size_t i = 0; i < arrayLen; i++)
        function(arrayAdress[i]);
}

#endif
