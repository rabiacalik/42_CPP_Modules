// DYNAMİC_CAST VE STATİC_CAST

/*
Dynamic_cast, runtime'da nesnenin türüne göre güvenli dönüşümler sağlar.
Static_cast, compile-time'da dönüşümleri gerçekleştirir ve dönüşümün her zaman başarılı olacağını varsayar.
Hangi operatörün kullanılacağı, dönüşümün güvenli olup olmadığına ve 
nesnenin türüne göre işlemler yapılıp yapılmadığına bağlıdır.
*/

class Base {
public:
  virtual ~Base() {}
};

class A : public Base {};
class B : public Base {};

#include <iostream>

int main() {
  Base* p = new A(); // Bir A nesnesi oluştur ve taban sınıf pointer'ına ata

  // Dynamic_cast ile A nesnesine dönüştür
  A* a = dynamic_cast<A*>(p);

  // Dönüşüm başarılıysa
  if (a) {
    std::cout << "Nesne A türünde" << std::endl;
  } else {
    std::cout << "Dönüşüm başarisiz!" << std::endl;
  }

  // Static_cast ile B nesnesine dönüştürmeye çalış (güvenli değil!)
  B* b = static_cast<B*>(p);

  // Dönüşüm her zaman başarılı olacağını varsayar
  // ...

  return 0;
}

//dynamic cast daha güvenliyse neden static cast kullanıyoruz
/*
    1-Performans : daha hızlı, dynamic cast kullandığı mekanizma ek işlem yuku oluşturur

    2-Kod basitliği : dynamic cast nullptr kontrolu için ek kodlar gerektirebilir

    3-Güvenli dönüşümler : donusumun guvenli olacagini biliyorsak direkt static kullanabiliriz
*/

//hangi durumlarda static hangi durumlarda dynamic cast kullanmalıyız
/*
    - dönüştürmek istediğiniz nesnenin türü, taban sınıftan türediği ve
      nesnenin gerçek türünün dönüştürmek istediğimiz türe uygun olduğu
      durumlarda static_cast kullanmak güvenlidir.

    - mesela A* ı B* a donusturmeye çalışmak. A sınıfı B sınıfından türemediği için
      bu dönüşüm güvenli değildir ve hata verebilir.

    - Dynamic_cast runtime'da nesnenin türüne göre güvenli dönüşümler sağlar.
      başarısız olma durumunda nullptr değeri döner.
*/


