/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 19:38:23 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/07/07 19:31:43 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(150)
{
    std::cout << "Bureaucrat: standard constructor called." << std::endl;
}

Bureaucrat::Bureaucrat(std::string const &name, int const &grade) : _name(name)
{
    std::cout << "Bureaucrat: constructor called." << std::endl;
    if (grade < MIN_GRADE)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > MAX_GRADE)
        throw Bureaucrat::GradeTooLowException();
    this->_grade = grade; 
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name), _grade() 
{
    std::cout << "Bureaucrat: copy constructor called." << std::endl;
    *this = other;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    std::cout << "Bureaucrat: copy assignement operator called." << std::endl;
    if (this ==  &other)
        return (*this);
    this->_grade = other._grade;
    return (*this);    
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat: destructor called." << std::endl;
}

std::string Bureaucrat::getName() {return(this->_name);}

int Bureaucrat::getgrade() {return(this->_grade);}

void Bureaucrat::incrementBuro()
{
    if (_grade - 1 < MAX_GRADE)
}