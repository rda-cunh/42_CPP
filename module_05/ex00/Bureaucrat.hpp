/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 19:38:11 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/07/01 21:14:06 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{
    private:
        const std::string   _name;
        int                 _grade;              

    public:
        Bureaucrat();                                   //default contructor
        Bureaucrat(const Bureaucrat &other);            //default copy contructor
        Bureaucrat &operator=(const Bureaucrat &other); //copy assignement operator
        ~Bureaucrat();                                  //destructor 
        
        std::string getName();
        int         getgrade();
        void        incrementBuro();
        void        decrementBuro();
};

#endif