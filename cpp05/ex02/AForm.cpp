#include "AForm.hpp"

// constrocter name, gradesign giriliyor
AForm::AForm(const std::string name, int gradeSign): _name(name), _isSigned(false), _gradeSign(gradeSign), _gradeExec(_gradeSign){
    if (gradeSign > 150)
        throw AForm::GradeTooLowException();
    if (gradeSign < 1)
        throw AForm::GradeTooHighException();
}

// constrocter name, gradesign, gradeexec giriliyor
AForm::AForm(const std::string name, int gradeSign, int gradeExecute): _name(name), _isSigned(false), _gradeSign(gradeSign), _gradeExec(gradeExecute){
    if (gradeSign > 150)
        throw AForm::GradeTooLowException();
    if (gradeSign < 1)
        throw AForm::GradeTooHighException();
}

AForm::~AForm() {}

AForm::AForm(const AForm& ref): _name( ref.get_name() ), _isSigned( ref.get_isSigned() ), _gradeSign( ref.get_gradeSign() ), _gradeExec( ref.get_gradeExec() ) {}

AForm& AForm::operator=(const AForm& ref){
    if (this != &ref)
        this->_isSigned = ref.get_isSigned();
    return (*this);
}

// getters
std::string AForm::get_name(void) const { return this->_name; }
int AForm::get_gradeSign(void) const { return this->_gradeSign; }
int AForm::get_gradeExec(void) const { return this->_gradeExec; }
bool AForm::get_isSigned(void) const { return this->_isSigned; }

void AForm::beSigned(const Bureaucrat& brc){
    if (brc.getGrade() > this->_gradeSign)
        throw AForm::GradeTooLowException();
    this->_isSigned = true;
}

std::ostream& operator<<(std::ostream& out, const AForm& ref){
    out << "name:\t" << ref.get_name() << std::endl;
    out << "isSigned:\t" << ref.get_isSigned() << std::endl;
    out << "gradeSign:\t" << ref.get_gradeSign() << std::endl;
    out << "gradeExec:\t" << ref.get_gradeExec() << std::endl;
    return out;
}