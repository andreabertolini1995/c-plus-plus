#include "../include/Zombie.hpp"

Zombie::Zombie(std::string n) {
    _name = n;
}

Zombie::~Zombie() { 
    std::cout << this->_name << " is destroyed" << std::endl;
}

void    Zombie::announce(void) {
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
