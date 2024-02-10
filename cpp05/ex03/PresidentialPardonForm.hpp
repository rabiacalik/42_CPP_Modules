#pragma once

#include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
    private:
        std::string _target;
        PresidentialPardonForm();

    public:
        PresidentialPardonForm(const std::string target);
        ~PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm& ppf);
        PresidentialPardonForm& operator=(const PresidentialPardonForm& ppf);

        void execute(const Bureaucrat& executor) const;
};