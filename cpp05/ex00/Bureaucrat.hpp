#pragma once

#include <iostream>

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
        Bureaucrat &operator=(const Bureaucrat &other);

        std::string getName( void ) const;
        int getGrade( void ) const;

        void increment_grade( void ); // seviye arttır
        void decrement_grade( void ); // seviye azalt

        // exception classes -- Orthodox Canonical Form da yazmak zorunda degiliz
        class GradeTooHighException: public std::exception{
            public:
                virtual const char* what() const throw(){
                    return "Grade too high!";
                }
        };

        class GradeTooLowException: public std::exception{
            public:
                virtual const char* what() const throw(){
                    return "Grade too low!";
                }
        };
};

std::ostream& operator<<( std::ostream &out, const Bureaucrat& obj );