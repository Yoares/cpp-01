#include "Harl.hpp"

Harl::Harl(){
    level[0] = "DEBUG";
    level[1] = "INFO";
    level[2] = "WARNING";
    level[3] = "ERROR";

    funcs[0] = &Harl::debug;
    funcs[1] = &Harl::info;
    funcs[2] = &Harl::warning;
    funcs[3] = &Harl::error;
}

void Harl::debug()
{
    std::cout << "[ DEBUG ]  I love having extra bacon!" << std::endl;
}
void Harl::info()
{
    std::cout << "[ INFO ] Adding extra bacon costs more money." << std::endl;
}
void Harl::warning()
{
    std::cout << "[ WARNING ] I think I deserve some free extra bacon." << std::endl;
}
void Harl::error()
{
    std::cout << "[ ERROR ] This is unacceptable!" << std::endl;
}

void Harl::complain( std::string level ){
    for (int i = 0; i < 4; i++){
        if (this->level[i] == level){
            (this->*funcs[i])();
            return ;
        }
    }
    std::cout << "Unknown log level." << std::endl;
}
