#include "Form.hpp"

// constrocter name, gradesign giriliyor
Form::Form(const std::string name, int gradeSign): _name(name), _isSigned(false), _gradeSign(gradeSign), _gradeExec(_gradeSign){
    if (gradeSign > 150)
        throw Form::GradeTooLowException();
    if (gradeSign < 1)
        throw Form::GradeTooHighException();
}

// constrocter name, gradesign, gradeexec giriliyor
Form::Form(const std::string name, int gradeSign, int gradeExecute): _name(name), _isSigned(false), _gradeSign(gradeSign), _gradeExec(gradeExecute){
    if (gradeSign > 150)
        throw Form::GradeTooLowException();
    if (gradeSign < 1)
        throw Form::GradeTooHighException();
}

// ekrana bastırması gerekli mi !!!!
Form::~Form() {}

Form::Form(const Form& ref): _name( ref.get_name() ), _isSigned( ref.get_isSigned() ), _gradeSign( ref.get_gradeSign() ), _gradeExec( ref.get_gradeExec() ) {}

Form& Form::operator=(const Form& ref){
    if (this != &ref)
        this->_isSigned = ref.get_isSigned(); //bunu niye boyle yaptik !!!!
    return (*this);
}

// getters
std::string Form::get_name(void) const { return this->_name; }
int Form::get_gradeSign(void) const { return this->_gradeSign; }
int Form::get_gradeExec(void) const { return this->_gradeExec; }
bool Form::get_isSigned(void) const { return this->_isSigned; }

std::ostream& operator<<(std::ostream& out, const Form& ref){
    out << "name:\t" << ref.get_name() << std::endl;
    out << "isSigned:\t" << ref.get_isSigned() << std::endl;
    out << "gradeSign:\t" << ref.get_gradeSign() << std::endl;
    out << "gradeExec:\t" << ref.get_gradeExec() << std::endl;
    return out;
}

// imzalamak
// issigned olabilmesi için gradeSign, grade den buyuk olmali
void Form::beSigned(const Bureaucrat& brc){
    if (brc.getGrade() > this->_gradeSign)
        throw Form::GradeTooLowException();
    this->_isSigned = true;
}