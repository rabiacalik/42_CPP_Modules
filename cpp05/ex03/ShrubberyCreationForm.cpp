#include "ShrubberyCreationForm.hpp"
//olusturulan dosyanın silinmesi gerekli mi !!!!!
ShrubberyCreationForm::ShrubberyCreationForm(const std::string target): AForm("ShrubberyCreationForm", 145, 137), _target(target){
    std::cout << "ShrubberyCreationForm = constructor called." << std::endl;
}

// aciklama yazilmali mi !!!!
ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& scf): AForm(scf){
    *this = scf;  //target de eşitlenmesi gerekmez mi !!!
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& scf){
    std::cout << "ShrubberyCreationForm = assigment function called." << std::endl;
    (void)scf;
    return (*this);
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const{
    if (!get_isSigned())
        throw FormNotSignedException();
    if (this->get_gradeExec() < executor.getGrade())
        throw GradeTooLowException();
    
    std::string n = this->get_name() + "_shrubbery";
    //c_str() ifadesi stringi char* a donusturur. dosya açılır
    std::ofstream file( n.c_str());

    file << "              ,@@@@@@@,                  " << std::endl;
    file << "      ,,,.   ,@@@@@@/@@,  .oo8888o.      " << std::endl;
    file << "   ,& %&%&&%,@@@@@/@@@@@@,8888888/8o     " << std::endl;
    file << "  ,%&|%&&%&&%,@@@|@@@/@@@88/88888/88'    " << std::endl;
    file << "  %&&%&%&/%&&%@@|@@/ /@@@88888/88888'    " << std::endl;
    file << "  %&&%/ %&%&&@@@ V /@@' `88/8 `/88'     " << std::endl;
    file << "  `&%  ` /%&'    |.|        / '|8'       " << std::endl;
    file << "      |o|        | |         | |         " << std::endl;
    file << "      |.|        | |         | |         " << std::endl;
    file << "   \\/ ._ //_/__/  ,<|_//__\\/.  |_//__/_ " << std::endl;

    file.close();
}
