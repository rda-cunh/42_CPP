/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 01:18:44 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/06/25 18:24:16 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
    std::cout << std::endl;
    std::cout << "*** NEW TEST: Animal creation tests to show animal class is non-instantiable (uncomment to cause compilation errors) ***" << std::endl;
    std::cout << std::endl;

    // Animal animal;              
    // Animal* ptr = new Animal();

    std::cout << std::endl;
    std::cout << "*** Repeating all tests from ex01 to check everything is working correctly as before ***" << std::endl;
    std::cout << "*** Creating an array of cats and dogs (50/50) and deleting the array ***" << std::endl;
    std::cout << std::endl;

    //creating the array of animals
    Animal *animals[4];
    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Dog();
    animals[3] = new Cat();

    //delete the array of animals
    for (int i = 0; i < 4; i++)
        delete animals[i];
    
    //tests with 2 cats    
    std::cout << std::endl;
    std::cout << "*** Creating a cat (with brain) and a copy cat and testing it's deep copy ***" << std::endl;
    std::cout << std::endl;

    Cat *original = new Cat();
    Cat *copy = new Cat(*original);

    std::cout << std::endl;
    std::cout << "Printing first two ideas from each cat (must be equal):" << std::endl;
    std::cout << "Original Idea 0: " << original->getBrain()->getIdea(0) << std::endl;
    std::cout << "Original Idea 1: " << original->getBrain()->getIdea(1) << std::endl;
    std::cout << "Copy Idea 0: " << copy->getBrain()->getIdea(0) << std::endl;
    std::cout << "Copy Idea 1: " << copy->getBrain()->getIdea(1) << std::endl;

    std::cout << std::endl;
    std::cout << "Printing brain adresses of both cats (must be different):" << std::endl;
    std::cout << "Original cat memory adress: " << original->getBrain() << std::endl;
    std::cout << "Copy cat memory adress: " << copy->getBrain() << std::endl;

    std::cout << std::endl;
    delete original;
    delete copy;
    
    //tests with 2 dogs    
    std::cout << std::endl;
    std::cout << "*** Creating a dog (with brain) and a copy dog and testing it's deep copy (same as before, but with the dog class) ***" << std::endl;
    std::cout << std::endl;

    Dog *originalDog = new Dog();
    Dog *copyDog = new Dog(*originalDog);

    std::cout << std::endl;
    std::cout << "Printing first two ideas from each dog (must be equal):" << std::endl;
    std::cout << "Original Dog Idea 0: " << originalDog->getBrain()->getIdea(0) << std::endl;
    std::cout << "Original Dog Idea 1: " << originalDog->getBrain()->getIdea(1) << std::endl;
    std::cout << "Copy Dog Idea 0: " << copyDog->getBrain()->getIdea(0) << std::endl;
    std::cout << "Copy Dog Idea 1: " << copyDog->getBrain()->getIdea(1) << std::endl;

    std::cout << std::endl;
    std::cout << "Printing brain adresses of both dogs (must be different):" << std::endl;
    std::cout << "Original dog memory adress: " << originalDog->getBrain() << std::endl;
    std::cout << "Copy dog memory adress: " << copyDog->getBrain() << std::endl;

    std::cout << std::endl;
    delete originalDog;
    delete copyDog;

    return (0);
}