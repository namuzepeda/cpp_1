#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
	Zombie	*horde = new Zombie[N];
	for(int i = 0; N > i; i++) {
		horde[i].setName(name);
	}
	return (horde);
}
