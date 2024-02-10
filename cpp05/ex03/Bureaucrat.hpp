#pragma once

#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
    private:
        const std::string _name;
        int _grade;
    
    public:
        Bureaucrat();
        Bureaucrat( const std::string name, int grade );
        ~Bureaucrat();
        Bureaucrat( const Bureaucrat &other );
        Bureaucrat &operator=( const Bureaucrat &other );

        std::string getName( void ) const;
        int getGrade( void ) const;

        void increment_grade( void );
        void decrement_grade( void );

        //---------- ex01 ----------//
        void signForm( AForm& f );
        //---------- ex01 ----------//

        //---------- ex02 ----------//
        void executeForm(const AForm& form) const;
        //---------- ex02 ----------//

        // exception classes
        class GradeTooHighException: public std::exception{
            public:
                virtual const char* what() const throw(){ return "Grade is too high!"; }
        };

        class GradeTooLowException: public std::exception{
            public:
                virtual const char* what() const throw(){ return "Grade is too low!"; }
        };
};

std::ostream& operator<<(std::ostream &out, const Bureaucrat& obj);
