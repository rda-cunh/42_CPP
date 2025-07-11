// missing header

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("", 72, 45)
{
    std::cout << "RobotomyRequestForm: default constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) 
    : AForm(target, 72, 45), _target(target)
{
    std::cout << "RobotomyRequestForm: constructor called." << std::endl;
}