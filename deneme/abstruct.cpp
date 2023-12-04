/* 
    Abstract Sınıf : Soyut sınıf
    kalıtım alınan sınıf içerisinde senNesin e bir şey atamayıp sıfıra eşitleseydik
    bu bir soyut sınıf olacakdı ve alt sınıflarında senNesin fonsiyonu kesin olarak tanımlanmak
    zorundaydık
*/

#include <iostream>
using namespace std;

class Sekil
{
    public:
        virtual void senNesin()
        {
            cout << "Ben bir sekilim" << endl;
        }
};

class Dikdortgen : public Sekil
{
    public:
        void senNesin()
        {
            cout << "Ben bir dikdortgenim" << endl;
        }
};

class Daire : public Sekil
{
    public:
};

int main()
{
    Sekil* dizi[3];
    dizi[0] = new Sekil();
    dizi[1] = new Dikdortgen();
    dizi[2] = new Daire();

    dizi[0]->senNesin();
    dizi[1]->senNesin();
    dizi[2]->senNesin();
}