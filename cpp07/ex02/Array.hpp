#pragma once

#include <cstdlib>

template<typename T>
class Array
{
    private:
        T* _array;
        unsigned int _size;

    public:
        Array();
        Array(unsigned int);
        Array(const Array& ref);
        ~Array();

        Array& operator=(const Array& ref);
        T& operator[](unsigned int i) const;

        unsigned int size(void);

        class OutOfBoundsException : public std::exception{
            public:
                virtual const char* what() const throw();
        };
};

#include "Array.tpp"