/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 01:28:07 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/06/28 01:25:48 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout << "MateriaSource: constructor called." << std::endl;
    for(int i = 0; i < M_SLOTS; i++)
        this->_learnedMaterias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
    std::cout << "MateriaSource: copy constructor called." << std::endl;
    *this = other;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
    std::cout << "MateriaSource: copy assignement operator called." << std::endl;
    if (this == &other)
        return (*this);
    for(int i = 0; i < M_SLOTS; i++)
    {
        if (this->_learnedMaterias[i])
            delete this->_learnedMaterias[i];
        this->_learnedMaterias[i] = other._learnedMaterias[i];
    }
    return (*this);
}

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource: destructor called." << std::endl;
    for (int i = 0; i < M_SLOTS; i++)
    {
        if (this->_learnedMaterias[i])
            delete this->_learnedMaterias[i];
    }
}

void MateriaSource::learnMateria(AMateria* materiaToLearn)
{
    for (int i = 0; i <= M_SLOTS; i++)
    {
        if (i == M_SLOTS)
        {
            std::cout << "MateriaSource: there's no free slot to learn more materias." << std::endl;
            delete materiaToLearn; //delete reject one to avoid leaks
            return ;
        }
        else if (!this->_learnedMaterias[i])
        {
            this->_learnedMaterias[i] = materiaToLearn;
            return ;
        }
    }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i <= M_SLOTS; i++)
    {
        if (i == M_SLOTS)
        {
            std::cout << "MateriaSource: no materia found of type " << type << "."
                << std::endl;
            return (0);
        }
        else if (this->_learnedMaterias[i] && this->_learnedMaterias[i]->getType() == type)
            return (this->_learnedMaterias[i]->clone());
    }
    return (0);
}