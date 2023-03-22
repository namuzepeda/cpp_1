#include <iostream>
#include "Zombie.hpp"

void	print_ins(std::string msg) {
	std::cout << "Creating instance of " << msg;
}

int	main(void) {
	newZombie("newZombie")->announce();
	randomChump("randomChump");
	newZombie("newZombie")->announce();
	randomChump("randomChump");


}
