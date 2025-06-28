/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 01:18:44 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/06/28 11:37:29 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{

    std::cout << std::endl;
    std::cout << "*** Animal creation tests (from subject) ***" << std::endl;
    std::cout << std::endl;

    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << std::endl;

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << std::endl;

    i->makeSound();     //will output the cat sound!
    j->makeSound();     //will output the dog sound!
    meta->makeSound();  //will output the animal sound!
    std::cout << std::endl;

    delete meta;
    delete j;
    delete i;
    std::cout << std::endl;

    std::cout << std::endl;
    std::cout << "*** Wrong classes tests (subject adaptation) ***" << std::endl;
    std::cout << std::endl;

    const WrongAnimal* meta2 = new WrongAnimal();
    const WrongAnimal* i2 = new WrongCat();
    std::cout << std::endl;

    std::cout << i2->getType() << " " << std::endl;
    std::cout << std::endl;

    i2->makeSound();     //will output the wrong animal sound!
    meta2->makeSound();  //will output the wrong animal sound!
    std::cout << std::endl;

    delete meta2;
    delete i2;
    
    return (0);
}