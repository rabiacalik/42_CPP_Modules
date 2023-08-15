//Kaynak
// https://github.com/yeaktas/CPP-Modules/blob/main/CPP-Module-00/ex00/megaphone.cpp

#include <iostream>

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        std::cout << "* DEGER GİRİLMEDİ *" << std::endl;
    }

    else
    {
        for (int i = 1; i < argc; i++)
        {
            for (int j = 0; i <= argv[i][j]; j++)
            {
                if ((argv[i][j] >= 'a' && argv[i][j] <= 'z'))
                    std::cout << (char)std::toupper(argv[i][j]); // toupper ascii deki int degerini doner 
                else
                    std::cout << argv[i][j];
            }
        }

        std::cout << std::endl;
    }
}

/*
    ->  girilen argumanları buyuk harfle ekrana yazdırır
*/

// (char) komutunu kaldırarak ekrana yazdırmayı dene