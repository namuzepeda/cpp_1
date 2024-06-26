#ifndef HUMANA_HPP
#define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA {
public:

	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);

	std::string getWeapon();
	void 		setWeapon(Weapon weapon);
	void		attack();


private:

	std::string name;
	Weapon		&weapon;

};

#endif
