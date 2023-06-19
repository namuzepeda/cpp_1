#ifndef HUMANB_HPP
#define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB {
public:

	HumanB(std::string name);
	~HumanB(void);

	std::string getWeapon();
	void 		setWeapon(Weapon &weapon);
	void		attack();


private:

	std::string name;
	Weapon		*weapon;

};

#endif
