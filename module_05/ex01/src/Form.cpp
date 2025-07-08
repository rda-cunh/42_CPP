/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 19:29:23 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/07/08 22:59:21 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Form.hpp"

Form::Form() : _name("default form"), _isSigned(false), _signGrade(150), _execGrade(150)
{
    std::cout << "Form: default constructor called." << std::endl;
}

Form::Form(std::string name, unsigned int signGrade, unsigned int execGrade) 
    : _name(name), _isSigned(false), _signGrade(signGrade), _execGrade(execGrade)
{
    std::cout << "Form: constructor called for " << this->getName() << "." << std::endl;
    if (signGrade > MAX_GRADE || execGrade > MAX_GRADE)
        throw GradeTooLowException();
    else if (signGrade < MIN_GRADE || execGrade < MIN_GRADE)
        throw GradeTooHighException();
}

Form::Form(const Form &other) 
    : _name(other._name), _isSigned(false), _signGrade(other._signGrade), _execGrade(other._execGrade) //evalute this in further detail (false or other.isSigned)
{
    std::cout << "Form: copy constructor called." << std::endl;
}

Form &Form::operator=(const Form &other)
{
    std::cout << "Form: copy assignemet operator called." << std::endl;
    if (this == &other)
        return (*this);
    this->_isSigned = false; //evalute this in further detail (false or other._isSigned)
    return (*this);    
}

Form::~Form()
{
    std::cout << "Form: destructor called." << std::endl;
}

std::string Form::getName() const {return (this->_name);}

bool Form::getIsSigned() const {return (this->_isSigned);}

unsigned int Form::getSignGrade() const {return (this->_signGrade);}

unsigned int Form::getExecGrade() const {return (this->_execGrade);}

void Form::beSigned(Bureaucrat &signer)
{
    if (this->getIsSigned())
        signer.signForm(this, "This form is already signed.");
    else if (this->getSignGrade() > signer.getGrade())
    {
        signer.signForm(this, "grade is too low.");
        throw Form::GradeTooLowException();
    }
    else
    {
        signer.signForm(this, "");
        this->_isSigned = true;
    }
}

const char *Form::GradeTooHighException::what() const throw()
{
    return ("Form | Exception: grade is too high!");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("Form | Exception: grade is too high!");
}

std::ostream &operator<<(std::ostream &out, const Form &obj)
{
    out << "The form " << obj.getName() << " is "
        << (obj.getIsSigned() ? "signed " : "not signed ")
        << "and requires a grade of " << obj.getSignGrade()
        << " to sign it and a grade of " << obj.getExecGrade()
        << " to to execute it.";
    return (out);
}
