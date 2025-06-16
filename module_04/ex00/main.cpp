/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 01:18:44 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/06/16 01:48:44 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{

    std::cout << std::endl;
    std::cout << "*** Animal creation tests (from subject) ***" << std::endl;
    std::cout << std::endl;


    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    i->makeSound(); //will output the cat sound!
    j->makeSound(); //will output the dog sound!
    meta->makeSound(); //will output the animal sound!

    delete meta;
    delete j;
    delete i;

    std::cout << std::endl;
    std::cout << "*** Wrong classes tests ***" << std::endl;
    std::cout << std::endl;

    return (0);
}