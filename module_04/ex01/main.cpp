/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 01:18:44 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/06/22 23:48:53 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
    std::cout << std::endl;
    std::cout << "*** Animal creation tests to check for leaks (given by the subject) ***" << std::endl;
    std::cout << std::endl;

    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    delete j;   //should not create a leak
    delete i;

    std::cout << std::endl;
    std::cout << "*** Creating an array of cats and dogs (50/50), printing some ideas, and deliting the array ***" << std::endl;
    std::cout << std::endl;

    //creating the array of animals
    Animal *animals[4];
    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Dog();
    animals[3] = new Cat();

    //printing 3 ideas from each of 4 the animals in the array
    for (int i = 0; i < 4; i++)
    {
        std::cout << "Animal number " << i << "(" << animals[i]->getType() << ") ideas:" << std::endl;
        for (int j = 0; j < 3; j++)
            std::cout << "Idea " << j << ":" << animals[i]->getIdea(j) << std::endl;
    }
 
    //clean the array of animals
    for (int i = 0; i < 4; i++)
        delete animals[i];
    
    //tests with 2 cats    
    std::cout << std::endl;
    std::cout << "*** Creating a cat (with brain) and a copy cat and testing it's deep copy ***" << std::endl;
    std::cout << std::endl;

    Cat *original = new Cat();
    Cat *copy = new Cat(*original);

    std::cout << std::endl;
    std::cout << "Printing first two ideas from each cat (must be equal)" << std::endl;
    std::cout << std::endl;
    original->getBrain()->getIdea(0);
    original->getBrain()->getIdea(1);
    copy->getBrain()->getIdea(0);
    copy->getBrain()->getIdea(1);

    std::cout << std::endl;
    std::cout << "Printing brain adresses of both cats (must be different)" << std::endl;
    std::cout << std::endl;
    std::cout << std::endl << "Original cat memory adress: " << original->getBrain() << std::endl;
    std::cout << "Copy cat memory adress: " << copy->getBrain() << std::endl;  
    
    //tests with 2 dogs    
    std::cout << std::endl;
    std::cout << "*** Creating a dog (with brain) and a copy dog and testing it's deep copy (same as before, but with the dog class) ***" << std::endl;
    std::cout << std::endl;

    Cat *original = new Cat();
    Cat *copy = new Cat(*original);

    std::cout << std::endl;
    std::cout << "Printing first two ideas from each cat (must be equal)" << std::endl;
    std::cout << std::endl;
    original->getBrain()->getIdea(0);
    original->getBrain()->getIdea(1);
    copy->getBrain()->getIdea(0);
    copy->getBrain()->getIdea(1);

    std::cout << std::endl;
    std::cout << "Printing brain adresses of both cats (must be different)" << std::endl;
    std::cout << std::endl;
    std::cout << std::endl << "Original cat memory adress: " << original->getBrain() << std::endl;
    std::cout << "Copy cat memory adress: " << copy->getBrain() << std::endl;  

    return (0);
}