/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 16:23:30 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/07/12 16:56:43 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("", 25, 5), _target("")
{
    std::cout << "PresidentialPardonForm: default constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) 
    : AForm(target, 25, 5), _target(target)
{
    std::cout << "PresidentialPardonForm: constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) 
    : AForm(other._target, 25, 5)
{
    std::cout << "PresidentialPardonForm: copy constructor called." << std::endl;   
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    std::cout << "PresidentialPardonForm: copy assignement operator called." << std::endl;
    if (this == &other)
        return (*this);
    this->setIsSigned(other.getIsSigned());
    this->_target = other._target;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm: destructor called." << std::endl;  
}

void PresidentialPardonForm::executer() const
{
    std::cout << "Informs that " << this->_target 
        << " has been pardoned by Zaphod Beeblebrox." << std::endl; 
}
