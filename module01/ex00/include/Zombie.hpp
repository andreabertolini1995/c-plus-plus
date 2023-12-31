#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string> 
#include <iostream>
using namespace std;

class Zombie {

    private:
        string name;

    public:
        Zombie(string n);
        ~Zombie();
        void announce(void);
};

Zombie* newZombie(string name);
void    randomChump(string name);

#endif
