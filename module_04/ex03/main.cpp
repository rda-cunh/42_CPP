/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 01:18:44 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/06/28 01:31:56 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include <iostream>

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    
    ICharacter* me = new Character("me");
    
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    
    ICharacter* bob = new Character("bob");

    me->use(0, *bob);
    me->use(1, *bob);

    delete bob;
    delete me;
    delete src;

    return (0);
}

/*
//Aditional tests
int main()
{
    std::cout << "\n--- Learn Materia Tests (more that 4) ---" << std::endl;
    IMateriaSource* src = new MateriaSource();
    
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Ice()); // rejected

    std::cout << "\n--- Create Materia Tests (more that 4) ---" << std::endl;
    ICharacter* me = new Character("me");

    AMateria* ice1 = src->createMateria("ice");
    AMateria* ice2 = src->createMateria("ice");
    AMateria* cure1 = src->createMateria("cure");
    AMateria* cure2 = src->createMateria("cure");
    AMateria* extra = src->createMateria("ice"); // rejected

    me->equip(ice1);
    me->equip(ice2);
    me->equip(cure1);
    me->equip(cure2);
    me->equip(extra); // ignored

    std::cout << "\n--- Use Materials (including incorrecting index) ---" << std::endl;
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    me->use(2, *bob);
    me->use(3, *bob);
    me->use(4, *bob);
    me->use(-1, *bob);
  
    std::cout << "\n--- Clean memory ---" << std::endl;
    delete bob;
    delete me;
    delete src;

    return (0);
}
*/
