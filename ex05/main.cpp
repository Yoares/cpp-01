#include "Harl.hpp"

int main(){
        Harl harl;

    harl.complain("DEBUG");
    harl.complain("WARNING");
    harl.complain("ERROR");
    harl.complain("INFO");
    harl.complain("INVALID");   // for testing

    return 0;
}