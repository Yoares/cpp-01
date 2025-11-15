#include "Zombie.hpp"

int main() {
    Zombie* z = newZombie("Ares");
    z->annouce();
    delete z;

    randomChump("malik");
}
