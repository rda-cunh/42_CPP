/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 01:18:44 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/06/20 18:48:41 by rda-cunh         ###   ########.fr       */
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
    std::cout << "*** Creating an array of cats and dogs (50/50) ***" << std::endl;
    std::cout << std::endl;

    



    return (0);
}