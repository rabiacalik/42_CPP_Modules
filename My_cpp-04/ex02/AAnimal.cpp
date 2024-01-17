
#include "AAnimal.hpp"

AAnimal::AAnimal(){
	this->_type = "Aanimal";
	std::cout << "AAnimal : constructed\n";
}

AAnimal::~AAnimal(){
	//std::cout << "AAnimal : destroyed\n";
}

AAnimal::AAnimal(AAnimal const & ref){
	this->_type = ref.getType();
	std::cout << "AAnimal : constructed from copy\n";
}

AAnimal & AAnimal::operator=(AAnimal const & rhs){
	this->_type = rhs.getType();
	return (*this);
}

void AAnimal::makeSound() const{
	//std::cout << "... generic animal sound ...\n";
}

std::string AAnimal::getType( void ) const{
	return (this->_type);
}