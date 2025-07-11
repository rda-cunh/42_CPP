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

#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

#define MAX_GRADE 1
#define MIN_GRADE 150

class Bureaucrat;

class AForm
{
    private:
        const std::string   _name;
        bool                _isSigned;
        const unsigned int  _signGrade;
        const unsigned int  _execGrade;

    public:
        AForm();                             //default constructor      
        AForm(std::string name, unsigned int signGrade, unsigned int execGrade);
        AForm(const AForm &other);            //copy constructor
        AForm &operator=(const AForm &other); //copy assignement operator
        virtual ~AForm() = 0;                 //destructor

        std::string     getName() const;
        bool            getIsSigned() const;
        void            setIsSigned(bool sign);
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

std::ostream &operator<<(std::ostream &out, const AForm &obj); //operator overloading

#endif