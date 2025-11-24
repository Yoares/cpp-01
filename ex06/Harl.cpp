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
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon!" << std::endl;
}
void Harl::info()
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "Adding extra bacon costs more money." << std::endl;
}
void Harl::warning()
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve some free extra bacon." << std::endl;
}
void Harl::error()
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << " This is unacceptable!" << std::endl;
}

void Harl::complain( std::string level ){

    int index = -1;
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++){
        if (this->level[i] == level){
           index = i; 
        }
    }
    switch (index)
    {
    case 0:
        this->debug();
        // fall through
    case 1:
        this->info();
        // fall through
    case 2:
        this->warning();
        // fall through
    case 3:
        this->error();
        break;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}
