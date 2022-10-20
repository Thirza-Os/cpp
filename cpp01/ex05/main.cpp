#include "Harl.hpp"

int main(void)
{
    Harl harlietje;
    std::string info = "INFO";
    std::string debug = "DEBUG";
    std::string warning = "WARNING";
    std::string error = "ERROR";
    
    harlietje.complain(info);
    harlietje.complain(debug);
    harlietje.complain(warning);
    harlietje.complain(error);

    return (0);
}
