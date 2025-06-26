/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 00:28:52 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/06/26 00:31:45 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain: default constructor called." << std::endl;
    randomIdeas();
}

Brain::Brain(const Brain &other)
{
    std::cout << "Brain: copy constructor called." << std::endl;
    *this = other;
}

Brain &Brain::operator=(const Brain &other)
{
    std::cout << "Brain: copy assignment operator called." << std::endl;
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

void Brain::randomIdeas()
{
    const std::string random_ideas[] = {
        "Get some food",
        "Play around",
        "Run away",
        "Play with my tail",
        "Sleep all day",
        "Trying to understand my human",
        "Take a nap",
        "Get a girlfriend",
        "Pee on the carpet",
        "Steal a sock",
        "Hanging around",
        "Break something",
        "Look for food",
        "Hide and seek",
        "Plan my night exit",
        "Make strange noises",
        "Play with daddy",
        "Make that scary look",
        "Search the garbage"};
    
    const int ideaCount = sizeof(random_ideas) / sizeof(random_ideas[0]);

    for (int i = 0; i < IDEAS; i++)
      this->ideas[i] = random_ideas[rand() % ideaCount];
}
