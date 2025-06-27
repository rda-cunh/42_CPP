/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 01:26:35 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/06/27 20:06:46 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include <list>

#define SLOTS 4

class AMateria;
class ICharacter;

class Character : public ICharacter
{
    private:
        std::string _name;
        AMateria *_inventory[SLOTS];
        std::list<AMateria *> _unequipedMaterias;
    
    public:
        Character(std::string const &name);             //Default constructor
        Character(const Character &other);              //Copy Constructor
        Character &operator=(const Character &other);   //Copy assignement operator
        ~Character();                                   //Destructor

        const std::string &getName() const;             //Getter for character name
        
        void equip(AMateria *m);                        //Equips a materia in the inventory 
        void unequip(int idx);                          //Unequips a materia from the inventory
        void use(int idx, ICharacter& target);          //Use the Materia of the _inventory[idx] and pass the target parameter to the AMateria::use method
};                                      

#endif