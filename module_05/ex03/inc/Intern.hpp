/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 18:31:08 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/07/22 17:58:11 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class AForm;
class ShrubberyCreationForm;
class RobotomyRequestForm;
class PresidentialPardonForm;

class Intern
{
    public:
        Intern();                                   //default constructor
        Intern(const Intern &other);                //copy constructor
        Intern &operator=(const Intern &other);     //copy assignment operator
        ~Intern();                                  //destructor

        static AForm *makeForm(const std::string &formName, const std::string &formTarget);
        
        static AForm *makeShrubberyCreationForm(const std::string &target);
        static AForm *makeRobotomyRequestForm(const std::string &target);
        static AForm *makePresidentialPardonForm(const std::string &target);

        class FormNotFound : public std::exception
        {
            public:
                const char *what() const throw();
        };
};

#endif