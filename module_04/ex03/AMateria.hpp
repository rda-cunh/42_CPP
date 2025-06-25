/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 18:31:00 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/06/25 18:51:18 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include <string>

class AMateria
{
    protected:
    std::string type;

    public:
    AMateria();                                 //Default Constructor
    AMateria(std::string const & type);
    AMateria(const AMateria &other);            //Copy Constructor
    AMateria &operator=(const AMateria &other); //Copy assignment operator 
    ~AMateria();                                //Destructor
    
    std::string const &getType() const;        //Returns the materia type
    
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter &target);
};

#endif