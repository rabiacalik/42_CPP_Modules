#include "Bureaucrat.hpp"

int main()
{
    {
        Bureaucrat bureacrat("rabi", 5);
        Form form("form1", 20);

        std::cout << form;
        bureacrat.signForm(form);
        std::cout << form;
    }
    std::cout << std::endl << std::endl;
    {
        Bureaucrat bureaucrat("rabi", 25);
        Form form("form1", 20);

        std::cout << form;
        bureaucrat.signForm(form);
        std::cout << form;
    }
    return 0;
}