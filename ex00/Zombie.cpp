#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	this->name = name;
}

Zombie::~Zombie() {
	std::cout << "Destroying " << this->name;
}

void Zombie::announce() {
	std::cout << name << ": BraiiiiiiinnnzzzZ...";
}

std::string Zombie::getName() {
	return this->name;
}

bool Zombie::setName(std::string name)
{
	if(trim(name).empty())
		return false;
	this->name = name;
	return true;
}
