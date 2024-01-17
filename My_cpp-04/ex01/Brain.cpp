#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain : constructed.\n";
}

Brain::~Brain(){
    std::cout << "Brain : destroyed.\n";
}

Brain::Brain( const Brain& tmp ){
    *this = tmp;
    std::cout << "Brain : copy constructed called.\n";
}

Brain& Brain::operator=( const Brain& tmp ){
    std::cout << "Brain : assignation operator called.\n";
    if(this == &tmp) // bu kontrole cok da gerek var mıydı !!!
        return(*this);
    
    for ( int i = 0; i < 100; i++ ){
        if ( tmp._ideas[i].length() > 0 )
            this->_ideas[i].assign(tmp._ideas[i]);
    }
    return(*this);
}

const std::string Brain::getIdeas( size_t i) const{
    if( i < 100 )
        return( this->_ideas[i] );
    else
        return("Brain Shutdown because, there is only 100 ideas per brain.\n");
        // brain asırı yuklendi 100 taneyi aştı
}

void Brain::setIdeas( size_t i, std::string idea ){
    if (i < 100)
        this->_ideas[i] = idea;
    else
        std::cout << "Brain Shutdown because, there is only 100 ideas per brain.\n";
}