/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 19:38:23 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/07/10 22:16:28 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default Buro"), _grade(150)
{
    std::cout << "Bureaucrat: standard constructor called." << std::endl;
}

Bureaucrat::Bureaucrat(std::string const &name, int const &grade) : _name(name)
{
    std::cout << "Bureaucrat: constructor called for " << getName() << "." << std::endl;
    if (grade < MAX_GRADE)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > MIN_GRADE)
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
    std::cout << "Bureaucrat: destructor called for " << getName() << "." << std::endl;
}

std::string Bureaucrat::getName() const {return(this->_name);}

unsigned int Bureaucrat::getGrade() const {return(this->_grade);}

void Bureaucrat::decrementBuro()
{
    if (this->_grade + 1 > MIN_GRADE)
        throw Bureaucrat::GradeTooLowException();
    this->_grade++;
}

void Bureaucrat::incrementBuro()
{
    if (this->_grade - 1 < MAX_GRADE)
        throw Bureaucrat::GradeTooHighException();
    this->_grade--;
}

void Bureaucrat::signForm(const Form *signedForm, const std::string &reason)
{
    if (reason.empty())
        std::cout << this->getName() << " signed " << signedForm->getName() 
            << "." << std::endl;
    else
        std::cout << this->getName() << " couldn't sign " << signedForm->getName() 
            << " because " << reason << std::endl;
}

//missing function to execute form

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Bureaucrat: grade is too high!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return("Bureaucrat: grade is too low!");
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj)
{
    out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
    return (out);
}
