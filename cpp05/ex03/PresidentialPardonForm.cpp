#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string target): AForm("PresidentialPardonForm", 25, 5), _target(target){
    std::cout << "PresidentialPardonForm : constructor called." << std::endl;
}

// !!!!
PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& ppf): AForm(ppf), _target(ppf._target) {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& ppf){
    std::cout << "PresidentialPardonForm : assigment function called." << std::endl;
    if (this != &ppf)
        this->_target = ppf._target;
    return (*this);
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const{
    if (!get_isSigned())
        throw FormNotSignedException();
    if (this->get_gradeExec() < executor.getGrade())
        throw GradeTooLowException();
    std::cout << executor.getName() << " has been pardone by Zaphod Beeblebrox." << std::endl;
}