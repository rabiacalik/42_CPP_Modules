#pragma once

#include <string>
#include <iostream>

class Brain
{
    private:
        std::string _ideas[100];

    public:
        Brain();
        ~Brain();
        Brain( const Brain& tmp );
        Brain& operator=( const Brain& tmp );

        void setIdeas(size_t, std::string );
        const std::string getIdeas( size_t ) const;
};