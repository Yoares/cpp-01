#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
# include <iostream>

class Zombie {
    private:
        std::string name;
    public:
        Zombie(std::string n) : name(n){};
        ~Zombie(){std::cout << name << " is destroyed "; };
        Zombie();
        ~Zombie();
        void annouce() const ;
        void set_name(const std::string& name);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);
Zombie* zombieHorde( int N, std::string name );

#endif // ZOMBIE_HPP
