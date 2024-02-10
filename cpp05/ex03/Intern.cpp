#include "Intern.hpp"

// bunlara açıklama yazmalı mıyım
Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(const Intern& i) {
    *this = i;
}

Intern& Intern::operator=(const Intern& i){
    (void)i;
    return (*this);
}

AForm* Intern::makeForm(std::string formName, std::string targetName){
    std::string formNames[] = {
        "robotomy request",
        "presidential pardon",
        "shrubbery creation"
    };

    AForm* forms[] = {
        new RobotomyRequestForm( targetName ),
        new PresidentialPardonForm( targetName ),
        new ShrubberyCreationForm( targetName )
    };

    for ( int i(0); i < 3; i++){
        if (formName == formNames[i]){
            std::cout << "Intern creates " << formName << std::endl;
            return forms[i];
        }
    }
    std::cout << "Intern cannot create " << formName << " form." << std::endl;
    return NULL;
}
