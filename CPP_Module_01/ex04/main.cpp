#include "file.hpp"

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Argument error!";
        return (1);
    }
    std::string file_str;
    std::string s1 = std::string(argv[2]);
    std::string s1 = std::string(argv[3]);

    file_str = file_read(argv[1]);
    if (file_str.empty())
        return (2);
    fill_replace(argv[1], file_str, s1, s2);
    return (0);
}
