#include "Cat.hpp"

Cat::Cat(): Animal(){
    std::cout << "Cat : constructed.\n";
    this->_type = "cat";
    this->_brain = new Brain();

    // yer ayrılamamışsa çıkar
    if (this->_brain == NULL){
        perror("Cat Brain allocation failed."); //hata mesajlarını standart hata akışına(stderr) yazdırır
        std::cerr << "Exiting the process now.\n";
        exit(1);
    }
}

Cat::~Cat(){
    delete( this->_brain);
    std::cout << "Cat : destroyed.\n";
}

Cat::Cat( const Cat& tmp ): Animal(){
    *this = tmp;
    std::cout << "Cat : copy constructed called.\n";
}

Cat& Cat::operator=( const Cat& tmp ){
    std::cout << "Cat : assignation operator called.\n";
    this->_type = tmp._type;
    this->_brain = new Brain();
    if( this->_brain == NULL ){
        perror("Cat Brain allocation failed");
        std::cerr << "Exiting the process now.\n";
        exit(1);
    }
    *this->_brain = *tmp._brain;
    return(*this);
}

void Cat::makeSound( void ) const{
    std::cout << this->getType() << " : Meoww meoww.\n";
}

void Cat::getIdeas( void ) const{
    for(int i = 0; i < 100; i++ )
        std::cout << "\tIdea " << i << " of the Cat is : \"" << this->_brain->getIdeas(i) << "\"" << std::endl;
}

void Cat::setIdeas( size_t i, std::string idea ){
    this->_brain->setIdeas(i, idea);
}