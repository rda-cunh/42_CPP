/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 07:41:18 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/09/01 07:55:56 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() :_maxContainer(0), _listNum()
{
    std::cout << "Span: default constructor called." << std::endl;
}

Span::Span(unsigned int N): _maxContainer(N), _listNum()
{
    std::cout << "Span: constructor called." << std::endl;
}

Span::Span(const Span &other)
{
    if this == other
}