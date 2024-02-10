#pragma once

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
    public:
        Intern();
        ~Intern();
        Intern(const Intern& i);
        Intern& operator=(const Intern& i);

        AForm* makeForm(std::string formName, std::string target);
};
