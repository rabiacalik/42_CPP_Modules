/*
Aşağıdaki metodları içeren statik bir Serializer sınıfı uygulayın:

uintptr_t serialize(Data ptr);* Bir pointer alır ve onu işaretsiz tamsayı tipi uintptr_t'ye dönüştürür.
Data deserialize(uintptr_t raw);* İşaretsiz bir tamsayı parametresi alır ve onu Data'ya bir pointer'a dönüştürür.
Sınıfınızın beklendiği gibi çalıştığından emin olmak için bir program yazın. Boş olmayan 
(veri üyeleri olduğu anlamına gelir) bir Data yapısı oluşturmalısınız. Data nesnesinin adresi üzerinde 
serialize() fonksiyonunu kullanın ve dönüş değerini deserialize() fonksiyonuna iletin. Ardından, deserialize()
fonksiyonunun dönüş değerinin orijinal pointer ile eşit olduğundan emin olun. Data yapınızın dosyalarını da teslim 
etmeyi unutmayın.

*/

#include "Serialize.hpp"

// nerde hangi değerleri ekrana yazdırıyor daha detaylı bak !!!!

int main()
{
    Data data = {0, 1};

    std::cout << "Test-1 Serialize" << std::endl;
    std::cout << Serialize::serialize(&data) << " : " << &data << std::endl << std::endl;

    std::cout << "Test-2 Deserialize" << std::endl;
    Data* ptr = Serialize::deserialize(Serialize::serialize(&data));
    std::cout << ptr << " : " << &data << std::endl;

    // Test-3 // aynı işaretçi / işaretçi farklı
    std::cout << std::endl << (ptr == &data ? "The same pointer" : "Pointer are differ") << std::endl;
    std::cout << "data (x) : " << (&data)->x << " ptr (x) : " << ptr->x << std::endl;
    std::cout << "data (y) : " << (&data)->y << " ptr (y) : " << ptr->y << std::endl;

}