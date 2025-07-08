/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 19:29:14 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/07/08 19:29:14 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include "../inc/Bureaucrat.hpp"

#define MAX_GRADE 1
#define MIN_GRADE 150

class Form
{
    private:
        const std::string   _name;
        bool                _isSigned;
        const unsigned int  _signGrade;
        const unsigned int  _execGrade;

    public:
        Form();                             //default constructor      
        Form(std::string name, unsigned int signGrade, unsigned int execGrade);
        Form(const Form &other);            //copy constructor
        Form &operator=(const Form &other); //copy assignement operator
        ~Form();                            //destructor

        std::string     getName() const;
        bool            getIsSigned() const;
        unsigned int    getSignGrade() const;
        unsigned int    getExecGrade() const; 

        void beSigned(Bureaucrat &signer);

        class GradeTooHighException : public std::exception
        {
            const char *what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            const char *what() const throw();
        };
};

std::ostream &operator<<(std::ostream &out, const Form &obj); //operator overloading

#endif