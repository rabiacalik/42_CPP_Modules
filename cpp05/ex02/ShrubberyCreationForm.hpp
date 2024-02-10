#pragma once

#include "AForm.hpp"

// Bu kütüphane, dosya giriş/çıkış işlemleri için kullanılan 
// ifstream, ofstream, ve fstream sınıflarını içerir.
#include <fstream>

class ShrubberyCreationForm: public AForm
{
    private:
        const std::string _target;
        ShrubberyCreationForm();
    public:
        ShrubberyCreationForm(const std::string target);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm& ref);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& ref);

        void execute(const Bureaucrat& executor) const;
};