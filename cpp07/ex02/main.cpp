/*

Türkçe Çevirisi:

İstekler:

T türünde öğeler içeren bir Array sınıf şablonu geliştirin. Bu sınıf şablonu aşağıdaki davranışları ve fonksiyonları içermelidir:

Parametresiz yapıcı: Boş bir dizi oluşturur.
Tek parametreli yapıcı: Parametre olarak aldığı unsigned int n değerine göre n sayıda öğeye sahip ve varsayılan değerlerle başlatılmış bir dizi oluşturur. İpucu: int *a = new int(); kodunu derleyip *a değerini yazdırmayı deneyin.
Kopyalama yapıcısı ve atama operatörü: Her iki durumda da, kopyalama işleminden sonra asıl dizide veya kopyasında yapılan değişiklikler diğer diziyi etkilememelidir.
Bellek yönetimi: Hafıza ayırmak için mutlaka new[] operatörünü kullanın. Önleyici bellek ayırma (önceden bellek ayırma) yasaktır. Programınız hiçbir zaman ayrılmamış belleğe erişmemelidir.
Öğelere erişim: Öğelere köşeli parantez operatörü [] kullanılarak erişilebilmelidir.
Sınır kontrolü: Köşeli parantez operatörü [] ile bir öğeye erişirken, indeks sınırların dışına çıkarsa bir std::exception fırlatılmalıdır.
size() fonksiyonu: Dizinin öğe sayısını döndüren size() adlı bir üye fonksiyonu olmalıdır. Bu üye fonksiyonu parametre almamalı ve mevcut örneği değiştirmemelidir.
Testler:

Her şeyin beklendiği gibi çalıştığından emin olmak için testlerinizi içeren bir main.cpp dosyası da teslim etmelisiniz.

*/

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750

int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;
    return 0;
}