// whatever için .cpp uzentılı dosyası gerekli mi !!!!

// Şablonda birden fazla tür alınabilir ve kullanılabilir, yeni eklenecek türün nasıl kullandıldığına göre değişir.

#pragma once

#include <iostream>

template<typename T>
void swap( T& a, T& b ) {
    T temp = a;
    a = b;
    b = temp;
}

template<typename T>
T min( T a, T b ) {
    if (a > b)
        return (b);
    else if (a == b)
        return (b);
    else
        return (a);
}

template<typename T>
T max( T a, T b ) {
    if (b > a)
        return (b);
    else if (a == b)
        return (b);
    else
        return (a);
}