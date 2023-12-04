#include <iostream>
using namespace std;

class Kedi
{
    public:
        virtual void sesVer() // virtual yazmazsak dizi den çağırdıgımızda aslanı
        // bize miyav dicek ama virtual dediğimizde aslan sesi çıkarıyor
        {
            cout << "miyav" << endl;
        }
};

class Aslan : public Kedi
{
    public:
        void sesVer()
        {
            cout << "VuĞarr" << endl;
        }
};

int main()
{
    Kedi ked;
    Aslan asl;

    ked.sesVer();
    asl.sesVer();

    cout << "-----------" << endl;

    Kedi* dizi[2];
    dizi[0] = &ked;
    dizi[1] = &asl;

    dizi[0]->sesVer();
    dizi[1]->sesVer();

    cout << "-----------" << endl;



}
