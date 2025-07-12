/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 19:20:33 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/07/11 19:20:33 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("", 72, 45)
{
    std::cout << "RobotomyRequestForm: default constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) 
    : AForm(target, 72, 45), _target(target)
{
    std::cout << "RobotomyRequestForm: constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
    : AForm(other._target, 72, 45)
{
    std::cout << "RobotomyRequestForm: copy constructor called." << std::endl;
    this->setIsSigned(other.getIsSigned());
    this->_target = other._target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    std::cout << "RobotomyRequestForm: copy assignement operator called." << std::endl;
    if (this == &other)
        return (*this);
    this->setIsSigned(other.getIsSigned());
    this->_target = other._target;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm: destructor called." << std::endl;
}

void RobotomyRequestForm::executer() const
{
    std::cout << "Drill starting..." << std::endl;
    std::cout << "Vrrrrrrrrrr! Vrrrrrrrrrr!" << std::endl;
    std::cout << "Vrrrrrrrrrr! Vrrrrrrrrrr! Vrrrrrrrrrr!" << std::endl;
    
    std::srand(std::time(0)); //seeds srand with time to ensure not to have the some output all the time

    if(rand() % 2)
        std::cout << this->_target << "has been robotimized!" << std::endl;
    else
        std::cout << this->_target << "has not been robotimized. Try again!" << std::endl;
}
