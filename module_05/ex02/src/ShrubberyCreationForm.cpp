/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 22:17:13 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/07/15 00:23:04 by rda-cunh         ###   ########.fr       */
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
    this->setIsSigned(other.getIsSigned());
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    std::cout << "ShrubberyCreationForm: copy assignement operator called." << std::endl;
    if (this == &other)
        return (*this);
    this->_target = other._target;
    this->setIsSigned(other.getIsSigned());
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm: destructor called." << std::endl;
}

void ShrubberyCreationForm::executer() const
{
    std::ofstream outputfile((this->_target + "_shrubbery").c_str());
    outputfile << "         &&& &&  & &&\n";
    outputfile << "     && &\\/&\\|& ()|/ @, &&\n";
    outputfile << "     &\\/(/&/&||/& /_/)_&/_&\n";
    outputfile << "  &() &\\/&|()|/&\\/ '%\" & ()\n";
    outputfile << " &_\\_&&_\\ |& |&&/&__%_/_& &&\n";
    outputfile << "&&   && & &| &| /& & % ()& /&&\n";
    outputfile << " ()&_---()&\\&\\|&&-&&--%---()~\n";
    outputfile << "     &&     \\|||\n";
    outputfile << "             |||\n";
    outputfile << "             |||\n";
    outputfile << "             |||\n";
    outputfile << "       , -=-~  .-^- _\n";
    outputfile.close();
    std::cout << "Shrubbery: tree file has been created." << std::endl;
}

