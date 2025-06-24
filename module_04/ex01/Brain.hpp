/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 00:28:39 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/06/24 00:50:48 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>
#include <cstdlib>

#define IDEAS 100

class Brain
{
    private:
        std::string ideas[IDEAS];

    public:
        Brain();                                //default constructor
        Brain(const Brain &other);              //copy constructor
        Brain &operator=(const Brain &other);   //copy assignment operator
        virtual ~Brain();                       //destructor
        
        std::string getIdea(int index);
        void setIdea(std::string idea, int index);
        void randomIdeas();                    //sets random ideas from a idea repository when a brain is created.
};

#endif
