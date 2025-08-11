/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 07:44:33 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/08/11 07:54:36 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_HPP
# define TEMPLATES.HPP

template <typename T>
void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
};

template <typename T>
T min(T &a, T &b)
{
    return( a < b ? a : b)
};

template <typename T>
T mzx(T &a, T &b)
{
    return( a > b ? a : b)
};

#endif
