#include "Dog.hpp"

Dog::Dog(): Animal(){
    std::cout << "Dog : constructed.\n";
    this->_type = "Dog";
    this->_brain = new Brain();

    // yer ayrılamamışsa çıkar
    if (this->_brain == NULL){
        perror("Dog Brain alloDogion failed."); //hata mesajlarını standart hata akışına(stderr) yazdırır
        std::cerr << "Exiting the process now.\n";
        exit(1);
    }
}

Dog::~Dog(){
    delete( this->_brain);
    std::cout << "Dog : destroyed.\n";
}

Dog::Dog( const Dog& tmp ): Animal(){
    *this = tmp;
    std::cout << "Dog : copy constructed called.\n";
}

Dog& Dog::operator=( const Dog& tmp ){
    std::cout << "Dog : assignation operator called.\n";
    this->_type = tmp._type;
    this->_brain = new Brain();
    if( this->_brain == NULL ){
        perror("Dog Brain alloDogion failed");
        std::cerr << "Exiting the process now.\n";
        exit(1);
    }
    *this->_brain = *tmp._brain;
    return(*this);
}

void Dog::makeSound( void ) const{
    std::cout << this->getType() << " : Havv havv.\n";
}

void Dog::getIdeas( void ) const{
    for(int i = 0; i < 100; i++ )
        std::cout << "\tIdea " << i << " of the Dog is : \"" << this->_brain->getIdeas(i) << "\"" << std::endl;
}

void Dog::setIdea(size_t i, std::string idea){
    this->_brain->setIdeas(i, idea);
}