/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 19:38:11 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/07/10 19:25:28 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

#define MAX_GRADE 1
#define MIN_GRADE 150

class Form;

class Bureaucrat
{
    private:
        std::string const   _name;
        unsigned int        _grade;              

    public:
        Bureaucrat();                                           //default contructor
        Bureaucrat(std::string const &name, int const &grade);
        Bureaucrat(const Bureaucrat &other);                    //copy contructor
        Bureaucrat &operator=(const Bureaucrat &other);         //copy assignement operator
        ~Bureaucrat();                                          //destructor 
        
        std::string     getName() const;
        unsigned int   getGrade() const;
        void            incrementBuro();
        void            decrementBuro();

        void signForm(const Form *signedForm, const std::string &reason);
     
        class GradeTooHighException : public std::exception
        {
            const char *what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            const char *what() const throw();
        };
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj); //operator overloading to allow printing

#endif