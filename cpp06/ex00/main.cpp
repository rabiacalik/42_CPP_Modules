/*

Türkçe Çevirisi:

Skaler Dönüştürücü Sınıfı Oluşturma

Görev:

ScalarConverter adında bir statik sınıf oluşturun.
Bu sınıfın içine, parametre olarak bir C++ literalinin string temsilini alan convert isimli bir metot ekleyin.
Literal, aşağıdaki skalar türlerden birine ait olmalıdır:
char
int
float
double
char parametreleri haricinde, sadece ondalık gösterimler kullanılmalıdır.
Metot Gereksinimleri:

Literalin türünü tespit etmeli.
String temsilini gerçek veri türüne dönüştürmeli.
Sonrasında, literali açık bir şekilde diğer üç veri türüne dönüştürmeli.
Son olarak, dönüştürme sonuçlarını aşağıdaki formatta göstermeli:
char: <char_değeri>
int: <int_değeri>
float: <float_değeri>
double: <double_değeri>
Dönüştürme anlamsız veya taşma söz konusu ise, kullanıcıyı uygun bir mesajla bilgilendirmeli.
Özel Durumlar:

char türü için gösterilemeyen karakterler giriş olarak kullanılmamalı.
float ve double türleri için -inf, +inf ve nan değerlerini de işleyebilmeli.
Test Programı:

Sınıfın beklenen şekilde çalıştığından emin olmak için bir test programı yazılmalı.
Test programı, aşağıdaki örneklerdeki gibi çıktılar üretmeli:
./convert 0
char: Gösterilemiyor
int: 0
float: 0.0f
double: 0.0

./convert nan
char: imkansız
int: imkansız
float: nanf
double: nan

./convert 42.0f
char: '*'
int: 42
float: 42.0f
double: 42.0

*/

#include "ScalarConversion.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Wrong Argument." << std::endl;
        return 1;
    }
    std::string arg = argv[1];
    ScalarConverter::convert(arg);
    return 0;
}