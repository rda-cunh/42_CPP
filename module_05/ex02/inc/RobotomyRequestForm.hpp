/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 21:43:21 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/07/10 21:46:30 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <cstdlib>
#include <ctime>

class AForm;

class RobotomyRequestForm : public AForm 
{
    private:
        std::string _target;
    
    public:
        RobotomyRequestForm();                                              //default constructor
        RobotomyRequestForm(const std::string &target);             
        RobotomyRequestForm(const RobotomyRequestForm &other);              //copy consttuctor
        RobotomyRequestForm &operator=(const RobotomyRequestForm &other);   //copy assignement operator
        ~RobotomyRequestForm();                                             //destructor

        void executer() const;
};

#endif
