/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 00:28:52 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/06/20 18:39:52 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain: default constructor called." << std::endl;
    generateIdeas();
}

Brain::Brain(const Brain &other)
{
    std::cout << "Brain: copy constructor called." << std::endl;
    for (int i = 0; i < IDEAS; i++)
        this->ideas[i] = other.ideas[i];    
}

Brain &Brain::operator=(const Brain &other)
{
    std::cout << "Brain:: copy assignment operator called." << std::endl;
    if (this == &other)
        return (*this);
    for (int i = 0; i < IDEAS; i++)
        this->ideas[i] = other.ideas[i];
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain: Distructor called." << std::endl;
}

void Brain::generateIdeas()
{
    for (int i = 0; i < IDEAS; i++)
        this->ideas[i] = "Random idea " + std::to_string(i);
}


#endif