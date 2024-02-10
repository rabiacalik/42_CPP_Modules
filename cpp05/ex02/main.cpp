#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    {
        std::cout << std::endl << "---------- Test 1 ----------" << std::endl;
        try{
            Bureaucrat bureaucrat("Buro", 5);
            std::cout << bureaucrat;

            ShrubberyCreationForm shrubbery("ayse");
            RobotomyRequestForm robotmy("fatma");
            PresidentialPardonForm presidential("ali");

            std::cout << shrubbery;
            std::cout << robotmy;
            std::cout << presidential;

            bureaucrat.signForm(shrubbery);
            bureaucrat.signForm(robotmy);
            bureaucrat.signForm(presidential);

            shrubbery.execute(bureaucrat);
            robotmy.execute(bureaucrat);
            presidential.execute(bureaucrat);
        }
        catch(const std::exception& e){
            std::cerr << e.what() << std::endl; // !!!cerr niye
        }
    }
    {
        std::cout << std::endl << "---------- Test 2 ----------" << std::endl;
        
        try{
            Bureaucrat bureaucrat("Buro", 50);
            std::cout << bureaucrat;

            ShrubberyCreationForm shrubbery("ayse");
            RobotomyRequestForm robotmy("fatma");
            PresidentialPardonForm presidential("ali");

            std::cout << shrubbery;
            std::cout << robotmy;
            std::cout << presidential;

            bureaucrat.signForm(shrubbery);
            bureaucrat.signForm(robotmy);
            bureaucrat.signForm(presidential);

            shrubbery.execute(bureaucrat);
            robotmy.execute(bureaucrat);
            presidential.execute(bureaucrat);
        }
        catch(const std::exception& e){
            std::cerr << e.what() << std::endl; // !!!cerr niye
        }
    }
    return 0;
}