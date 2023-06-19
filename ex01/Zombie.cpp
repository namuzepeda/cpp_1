#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	this->name = name;
}

Zombie::Zombie(void)
{
	this->name = "(null)";
	std::cout << "Zombie object " << this->name << " created" << std::endl;
}

Zombie::~Zombie() {
	std::cout << "Destroying " << this->name << std::endl;
}

void Zombie::announce() {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
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
