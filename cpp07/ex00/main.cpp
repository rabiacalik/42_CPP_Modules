/*
Fonksiyon Şablonları:
1. swap:

İki verilen argümanın değerlerini değiştirir. Hiçbir şey döndürmez.
2. min:

Argüman olarak verilen iki değeri karşılaştırır ve en küçüğünü döndürür. İki değer eşitse, ikinci değeri döndürür.
3. max:

Argüman olarak verilen iki değeri karşılaştırır ve en büyüğünü döndürür. İki değer eşitse, ikinci değeri döndürür.
Bu fonksiyonlar herhangi bir argüman türüyle çağrılabilir. Tek şart, iki argümanın aynı türe sahip olması ve 
tüm karşılaştırma operatörlerini desteklemesidir. Şablonlar başlık dosyalarında tanımlanmalıdır.
*/

#include "whatever.hpp"

int main( void ) 
{
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    
    return 0;
}