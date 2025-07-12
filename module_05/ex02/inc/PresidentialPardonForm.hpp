/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 21:49:01 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/07/12 16:13:40 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PREDIDENTIALPARDONFORM_HPP
# define PREDIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include <string>

class AForm;

class PresidentialPardonForm : public AForm
{
    private:
        std::string _target;

    public:
        PresidentialPardonForm();                                                  //default constructor
        PresidentialPardonForm(const std::string &target);                         
        PresidentialPardonForm(const PresidentialPardonForm &other);               //copy constructor
        PresidentialPardonForm &operator=(const PresidentialPardonForm &other);    //copy assignement operator
        ~PresidentialPardonForm();                                                 //destructor
        
        void executer() const;
};

#endif
