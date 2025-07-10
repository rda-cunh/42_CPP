/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 22:17:13 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/07/10 22:49:51 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("", 145, 137)
{
    std::cout << "ShrubberyCreationForm: default contructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
    : AForm(target, 145, 137), _target(target)
{
    std::cout << "ShrubberyCreationForm: contructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
    : AForm(other.getName(), other.getSignGrade(), other.getExecGrade()), _target(other._target)
{
    std::cout << "ShrubberyCreationForm: copy contructor called." << std::endl;
    this->getIsSigned(other.getIsSigned());
}

