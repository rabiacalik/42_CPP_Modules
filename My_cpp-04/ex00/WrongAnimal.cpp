#include "WrongAnimal.hpp"

// type degerini wrong animal olarak degiştirebilir miyim !!!
WrongAnimal::WrongAnimal(){
    std::cout << "Wrong Animal : constructed.\n";
    this->type = "animal";
}

WrongAnimal::~WrongAnimal(){
    std::cout << "Wrong Animal : destroyed.\n";
}

// tmp bir regerans oldugu icin (.) kullanıldı
// pointer olsaydı (->) ile çagırılacakti
WrongAnimal::WrongAnimal( WrongAnimal & tmp ){
    this->type = tmp.type;
    std::cout << "Wrong Animal : constructed from copy.\n";
}

WrongAnimal & WrongAnimal::operator=( WrongAnimal const & tmp ){
    this->type = tmp.type;
    return (*this);
}

void WrongAnimal::makeSound() const{
    std::cout << "... generic wrong animal sound ...\n";
}

std::string WrongAnimal::getType( void ) const{
    return (this->type);
}