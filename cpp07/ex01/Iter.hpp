#pragma once

#include <iostream>

template<typename T>
void print(T a) {
    std::cout << a << " ";
}

template<typename T, typename Function>
void iter(T arr, int len, Function func) {
    for (int i = 0; i < len; i++) {
        func(arr[i]);
    }
}