#include "Harl.hpp"

int main()
{
    Harl h;

    h.complain("WARNING");
    h.complain("ERROR");
    h.complain("WARNING");
    h.complain("INFO");
    h.complain("DEBUG");

    return (0);
}