#include "WrongCat.hpp"

WrongCat::WrongCat(){
	this->type = "wrong cat";
	std::cout << "Wrong Cat : constructed.\n";
}

WrongCat::~WrongCat(){
	std::cout << "Wrong Cat : destroyed.\n";
}

WrongCat::WrongCat( WrongCat & tmp ):WrongAnimal(tmp){
	this->type = tmp.getType();
	std::cout << "Wrong Cat : constructed from copy.\n";
}

WrongCat & WrongCat::operator=( WrongCat const & tmp ) {
	this->type = tmp.type;
	return (*this);
}

void WrongCat::makeSound() const{
	std::cout << "... Fake meow meow ...\n";
}