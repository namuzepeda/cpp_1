#include <iostream>
#include "Zombie.hpp"

int	main(void) {
	Zombie *fZombie = newZombie("newZombie1");
	fZombie->announce();
	delete fZombie;
	randomChump("randomChump1");
	Zombie *sZombie = newZombie("newZombie2");
	sZombie->announce();
	delete sZombie;
}
