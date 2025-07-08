/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 19:38:11 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/07/08 00:22:22 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>

#define MAX_GRADE 1
#define MIN_GRADE 150

class Bureaucrat
{
    private:
        const std::string   _name;
        int                 _grade;              

    public:
        Bureaucrat();                                           //default contructor
        Bureaucrat(std::string const &name, int const &grade);
        Bureaucrat(const Bureaucrat &other);                    //default copy contructor
        Bureaucrat &operator=(const Bureaucrat &other);         //copy assignement operator
        ~Bureaucrat();                                          //destructor 
        
        std::string getName() const;
        int         getGrade() const;
        void        incrementBuro();
        void        decrementBuro();

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