/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 16:57:56 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/08/19 14:13:09 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <cstddef>

template <typename T, typename F>
void iter(T *arrayAdress, size_t arrayLen, F function) //can use void(*function)(T const &) or void(*function)(T&) instead if do not want to use a template for the function and define previously if the array can be changed
{
    for(size_t i = 0; i < arrayLen; i++)
        function(arrayAdress[i]);
}

#endif
