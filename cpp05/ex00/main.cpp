#include "Bureaucrat.hpp"

int main()
{
    {
        Bureaucrat a("rabi", 1);
        std::cout << a << std::endl;

        try{
            a.increment_grade();
        }
        catch(Bureaucrat::GradeTooHighException &e){
            std::cout << e.what() << std::endl;
        }
        std::cout << a << std::endl << std::endl;
    }

    {
        Bureaucrat a("rabi", 150);
        std::cout << a << std::endl;

        try{
            a.decrement_grade();
        }
        catch(Bureaucrat::GradeTooLowException &e){
            std::cerr << e.what() << std::endl;
        }
        std::cout << a << std::endl;
    }
    return 0;
}