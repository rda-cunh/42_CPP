/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 00:28:52 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/06/22 23:51:00 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain: default constructor called." << std::endl;
    for (int i = 0; i < IDEAS; i++)
        this->ideas[i] = "Random idea " + std::to_string(i);
}

Brain::Brain(const Brain &other)
{
    std::cout << "Brain: copy constructor called." << std::endl;
    *this = other;
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

std::string Brain::getIdea(int index)
{
    if (index >= 0 && index <= 100)
        return(this->ideas[index]);
    else
        return("Invalid index number.");
}

void Brain::setIdea(std::string idea, int index)
{
    if (index >= 0 && index <= 100)
        this->ideas[index] = idea;
    else
        std::cout << "Invalid index number." << std::endl;
}




#endif