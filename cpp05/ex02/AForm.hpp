#pragma once

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        const std::string _name;
        bool _isSigned; // imzalandı
        const int _gradeSign; // seviye imza
        const int _gradeExec; // seviye uygulamak
        AForm();

    public:
        AForm( std::string name, int gradeSign );
        AForm( std::string name, int gradeSign, int gradeExecute );
        ~AForm();
        AForm( const AForm& ref );
        AForm& operator=( const AForm& ref );

        std::string get_name( void ) const;
        int get_gradeSign( void ) const;
        int get_gradeExec( void ) const;
        bool get_isSigned( void ) const;

        void beSigned( const Bureaucrat& brc );

        //---------- ex02 ----------//
        virtual void execute(Bureaucrat const & execute) const = 0;
        //---------- ex02 ----------//

        // exception classes
        class GradeTooHighException: public std::exception{
            public:
                virtual const char *what() const throw() { return "Grade too high!"; }
        };

        class GradeTooLowException: public std::exception{
            public:
                virtual const char *what() const throw() { return "Grade too low!"; }
        };
        
        //---------- ex02 ----------//
        class FormNotSignedException: public std::exception{
            public :
                virtual const char *what() const throw() { return "Grade too low to sign Form."; }
        };
        //---------- ex02 ----------//
};

std::ostream& operator<<(std::ostream& out, const AForm& ref);