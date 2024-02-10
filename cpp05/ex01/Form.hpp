#pragma once

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string _name;
        bool _isSigned; // imzalandı
        const int _gradeSign; // seviye imza
        const int _gradeExec; // seviye uygulamak
        Form();

    public:
        Form( std::string name, int gradeSign );
        Form( std::string name, int gradeSign, int gradeExecute );
        ~Form();
        Form( const Form& ref );
        Form& operator=( const Form& ref );

        std::string get_name( void ) const;
        int get_gradeSign( void ) const;
        int get_gradeExec( void ) const;
        bool get_isSigned( void ) const;

        void beSigned( const Bureaucrat& brc );

        // exception classes
        class GradeTooHighException: public std::exception{
            public:
                virtual const char *what() const throw() { return "Grade too high!"; }
        };

        class GradeTooLowException: public std::exception{
            public:
                virtual const char *what() const throw() { return "Grade too low!"; }
        };
};

std::ostream& operator<<(std::ostream& out, const Form& ref);