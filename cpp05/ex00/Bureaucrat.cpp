#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("default"), _grade(50){
    std::cout << "[ Default constructor ] Grade is: " << this->_grade << std::endl; 
}

Bureaucrat::Bureaucrat(const std::string name, int grade): _name(name), _grade(grade){
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat(){};

Bureaucrat::Bureaucrat(const Bureaucrat &other): _name(other.getName()), _grade(other.getGrade()){};

// getters
std::string Bureaucrat::getName(void) const { return this->_name; }
int Bureaucrat::getGrade(void) const { return this->_grade; }

void Bureaucrat::increment_grade(void){
    if (this->_grade <= 1)
        throw Bureaucrat::GradeTooHighException();
    this->_grade--;
}

void Bureaucrat::decrement_grade(void){
    if (this->_grade >= 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade++;
}

std::ostream& operator<<(std::ostream &out, const Bureaucrat& obj){
    out << obj.getName() << " has grade: " << obj.getGrade() << std::endl;
    return out;
}