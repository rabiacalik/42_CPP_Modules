#include <iostream>

int main(int argc, char **argv)
{
    if(argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
        {
            for (int i = 1; argv[i]; i++)
            {
                for (int j = 0; argv[i][j]; j++)
                {
                    if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
                    {
                        std::cout << (char)std::toupper(argv[i][j]);
                    }
                    else
                    {
                        std::cout << argv[i][j];
                    }
                }
                std::cout << std::endl;
            }
        }
}

/*
std standart kutuphanedir durada namespace olarak kullanılıyor
*/