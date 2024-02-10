#include "Serialize.hpp"

Serialize::Serialize() {}

Serialize::~Serialize() {}

Serialize::Serialize(Serialize const& src) { *this = src; }

Serialize& Serialize::operator=(Serialize const& src) {
    this->str = src.str;
    return (*this);
}

uintptr_t Serialize::serialize(Data* ptr){
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serialize::deserialize(uintptr_t raw){
    return reinterpret_cast<Data*>(raw);
}

/*
    reinterpret_cast gorevleri
    - herhangi bir işaretçiyi başka bir işaretçi türüne dönüştürmek
    - tüm integer turlerini bir işaretçiye döndürmek yada tam tersi
    
*/
