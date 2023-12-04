#include "Fixed.hpp"

int main()
{
    // default counstructer a isimli fixed nednedi oluşturuyor
    Fixed a;

    // copy counstructer b isimli bir fixed nesnesini a ile aynı olarak oluşturur
    Fixed b(a);

    // c nesnesi oluşturulur
    Fixed c;

    // atama operatoru kullanılarak c nesnesine b nesnesinin degrleri atanır
    c = b;
    

    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;

}