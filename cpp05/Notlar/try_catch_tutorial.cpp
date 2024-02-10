///////////////////////////
// ex01

#include <iostream>

using namespace std;

void f1()
{
    cout << "f1 is being stardes!" << endl;
    throw 1;
    cout << "f1 have been done!" << endl;
}

int main()
{
    cout << "main is being starded!" << endl;

    try
    {
        f1();
    }
    catch(int)
    {
        cout << "error : int" << endl;
    }
    catch(double)
    {
        cout << "error : double" << endl;
    }
    catch(...)
    {
        cout << "error : default error" << endl;
    }
    return 0;
}