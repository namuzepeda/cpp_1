#include <iostream>
#include "Zombie.hpp"

int	main(void) {
	int amount = 15;
	Zombie *horde = zombieHorde(amount, "Bonjour");
	for(int i = 0; amount > i; i++) {
		horde[i].announce();
	}
	delete [] horde;
}
