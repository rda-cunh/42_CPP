/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 00:28:39 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/06/17 00:38:51 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>

#define IDEAS 100

class Brain
{
    private:
        std::string ideas[IDEAS];

    public:
        ~Brain();                   //default constructor
        Brain(const Brain &other);
        void getIdeas() const; 
};
