#include <iostream>
#include <string>

int main()
{
    std::string temp;
    std::cout << "satır: ";
    getline(std::cin, temp);
    std::cout << "girilen satır : " << temp << std::endl;
    return 0;
}