#include "RobotomyRequestForm.hpp"
#include <cstdlib> // srand() - rand()

RobotomyRequestForm::RobotomyRequestForm(const std::string target): AForm("RobotomyRequestForm", 72, 45), _target(target){
    std::cout << "RobotomyRequestForm : constructor called." << std::endl;
}

// açıklama !!!!
RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& rrf): AForm(rrf){
    *this = rrf;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& rrf){
    std::cout << "RobotomyRequestFrom : assigment function called." << std::endl;
    (void)rrf;///!!!!
    return (*this);
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const{
    if (!get_isSigned())
        throw FormNotSignedException();
    if (this->get_gradeExec() < executor.getGrade())
        throw GradeTooLowException();

    // rastgele sayı uretiyor
    srand(time(0));
    std::cout << "RrrrobotVoicccee" << std::endl;
    if (rand() % 2 == 0)
        std::cout << this->_target << " has been robotomized successfully 50% of the time" << std::endl;
    else
        std::cout << this->_target << "'s robotization process failed!" << std::endl;
}
