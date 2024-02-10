/*

Türkçe Çeviri:
Bir tane sadece public ve soyut bir yıkıcı (destructor) içeren Base sınıfı uygulayın. Base sınıfından public biçimde miras alan ve hiçbir şey içermeyen A, B ve C sınıflarını oluşturun. Bu dört sınıfın Ortodoks Kanonik Form'a göre tasarlanması gerekmez. Aşağıdaki fonksiyonları uygulayın:

Base * generate(void);
Rastgele A, B veya C sınıfından bir nesne örneği oluşturur ve örneği bir Base işaretçisi olarak döndürür. Rastgele seçim uygulaması için istediğiniz yöntemi kullanabilirsiniz.

void identify(Base p);*
p parametresinin işaret ettiği nesnenin gerçek tipini (“A”, “B” veya “C”) yazdırır.

void identify(Base& p);
p parametresinin işaret ettiği nesnenin gerçek tipini (“A”, “B” veya “C”) yazdırır. Bu fonksiyon içinde işaretçi kullanmak yasaktır. typeinfo başlığını eklemek de yasaktır.

Her şeyin beklendiği gibi çalıştığını doğrulamak için bir program yazın.

*/

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

//identify neden hem pointer hem de referance olarak alıyor
//yani bir amaç yok bu farklara tekrardan bak !!!!

int     main( void )
{
    Base*   base_1 = Base::generate();
    Base*   base_2 = Base::generate();
    Base*   base_3 = Base::generate();

    std::cout << "base_1* = "; Base::identify( base_1);
    std::cout << "base_1& = "; Base::identify(*base_1);
    std::cout << std::endl;

    std::cout << "base_2* = "; Base::identify( base_2);
    std::cout << "base_2& = "; Base::identify(*base_2);
    std::cout << std::endl;

    std::cout << "base_3* = "; Base::identify( base_3);
    std::cout << "base_3& = "; Base::identify(*base_3);
    std::cout << std::endl;

    delete base_1;
    delete base_2;
    delete base_3;

    return (0);
}