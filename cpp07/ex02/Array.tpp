/*
Belirli bir veri türü için özel bir davranış istiyorsanız, bir şablon özelleştirme oluşturabilirsiniz.
Bu özelleştirme, özel bir .tpp dosyasında tanımlanır ve şablonun adını ve özelleştirilen veri türünü içerir.
*/


#include "Array.hpp"

#ifndef ARRAY_TPP
#define ARRAY_TPP

template<typename T>
Array<T>::Array() : _array(NULL), _size(0){
    std::cout << "Default Constuctor called" << std::endl;
}

template<typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n){
    std::cout << "Constructor called" << std::endl;
}

template<typename T>
Array<T>::Array(const Array& ref) : _array(new T[ref._size]), _size(ref._size){
    std::cout << "Copy Constructor called" << std::endl;
    for (unsigned int i = 0; i < this->_size; i++)
        this->_array[i] = ref._array[i];
}

template<typename T>
Array<T>::~Array(void){
    std::cout << "Destructor called" << std::endl;
    delete[] _array;
}

template<typename T>
Array<T>& Array<T>::operator=(const Array& ref) {
    std::cout << "Copy Assigment operator called" << std::endl;
    if (this != &ref){
        delete[] this->_array;
        this->_array = new T[ref._size];
        this->_size = ref->_size;
        for (unsigned int i = 0; i < this->_size; i++)
            this->_array[i] = ref._array[i];
    }
    return (*this);
}

// bu operatoru nerelerde kullanıyoruz anlamadım!!!!!
template<typename T>
T& Array<T>::operator[](unsigned int i) const{
    if (i >= this->_size)
        throw (OutOfBoundsException());
    return (this->_array[i]);
}

template<typename T>
unsigned int Array<T>::size(void){
    return (this->_size);
}

template<typename T>
const char* Array<T>::OutOfBoundsException::what() const throw(){
    return ("Index is out of bounds!");
}

#endif
