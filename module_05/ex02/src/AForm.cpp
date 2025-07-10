/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 19:29:23 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/07/10 20:49:41 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("default form"), _isSigned(false), _signGrade(150), _execGrade(150)
{
    std::cout << "AForm: default constructor called." << std::endl;
}

AForm::AForm(std::string name, unsigned int signGrade, unsigned int execGrade) 
    : _name(name), _isSigned(false), _signGrade(signGrade), _execGrade(execGrade)
{
    std::cout << "AForm: constructor called for " << this->getName() << "." << std::endl;
    if (signGrade < MAX_GRADE || execGrade < MAX_GRADE)
        throw GradeTooHighException();
    else if (signGrade > MIN_GRADE || execGrade > MIN_GRADE)
        throw GradeTooLowException();
}

AForm::AForm(const AForm &other) 
    : _name(other._name), _isSigned(false), _signGrade(other._signGrade), _execGrade(other._execGrade) //evalute this in further detail (false or other.isSigned)
{
    std::cout << "AForm: copy constructor called." << std::endl;
}

AForm &AForm::operator=(const AForm &other)
{
    std::cout << "Form: copy assignemet operator called." << std::endl;
    if (this == &other)
        return (*this);
    this->_isSigned = false; //evalute this in further detail (false or other._isSigned)
    return (*this);    
}

AForm::~AForm()
{
    std::cout << "Form: destructor called." << std::endl;
}

std::string AForm::getName() const {return (this->_name);}

bool AForm::getIsSigned() const {return (this->_isSigned);}

unsigned int AForm::getSignGrade() const {return (this->_signGrade);}

unsigned int AForm::getExecGrade() const {return (this->_execGrade);}

void AForm::beSigned(Bureaucrat &signer)
{
    if (this->getIsSigned())
        signer.signForm(this, "This form is already signed.");
    else if (this->getSignGrade() < signer.getGrade())
    {
        signer.signForm(this, "grade is too low.");
        throw AForm::GradeTooLowException();
    }
    else
    {
        signer.signForm(this, "");
        this->_isSigned = true;
    }
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return ("AForm | Exception: grade is too high!");
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return ("AForm | Exception: grade is too low!");
}

std::ostream &operator<<(std::ostream &out, const AForm &obj)
{
    out << "The form " << obj.getName() << " is "
        << (obj.getIsSigned() ? "signed " : "not signed ")
        << "and requires a grade of " << obj.getSignGrade()
        << " to sign it and a grade of " << obj.getExecGrade()
        << " to to execute it.";
    return (out);
}
