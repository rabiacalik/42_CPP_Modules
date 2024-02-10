/*
İstekler:

Aşağıdaki özellikleri sağlayan bir iter fonksiyon şablonu oluşturun:

3 parametre alır ve hiçbir şey döndürmez.
İlk parametre, bir dizinin adresidir.
İkinci parametre, dizinin uzunluğudur.
Üçüncü parametre, dizinin her bir öğesi üzerinde çağrılacak bir fonksiyondur.
Testler:

Testlerinizi içeren bir main.cpp dosyası oluşturun. Bir test çalıştırılabilir dosyası oluşturmak için yeterli kod sağlayın.

Gereklilikler:

iter fonksiyon şablonunuz, herhangi bir türdeki dizi ile çalışabilmelidir.
Üçüncü parametre, örneklenmiş bir fonksiyon şablonu olabilir.
*/

#include "Iter.hpp"

int main()
{
	std::string array1[] = {"elma", "armut", "nar"};
	int len1 = sizeof(array1) / sizeof(array1[0]);

	char array2[] = {'e', 'a', 'n'};
	int len2 = sizeof(array2) / sizeof(array2[0]);

	int array3[] = {4, 8, 15, 16, 23, 42};
	int len3 = sizeof(array3) / sizeof(array3[0]);
	
	std::cout << "Array 1 = ";
	::iter(array1, len1, print<std::string>);
	std::cout << std::endl;

	std::cout << "Array 2 = ";
	::iter(array2, len2, print<char>);
	std::cout << std::endl;

	std::cout << "Array 3 = ";
	::iter(array3, len3, print<int>);
	std::cout << std::endl;	
}