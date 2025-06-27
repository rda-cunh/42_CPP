/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 01:28:10 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/06/27 19:49:17 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

#define  M_SLOTS 4

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *_learnedMaterias[M_SLOTS];

    public:
        MateriaSource();                                        //Default constructor
        MateriaSource(const MateriaSource &other);              //Copy constructor
        MateriaSource &operator=(const MateriaSource &other);   //Copy assignement operator
        ~MateriaSource();                                       //Destructor

        void learnMateria(AMateria*);                           //Copies the Materia passed as a parameter and stores it so it can be cloned later
        AMateria* createMateria(std::string const &type);       //Creates a copy of a Materia previously learned
};

#endif
