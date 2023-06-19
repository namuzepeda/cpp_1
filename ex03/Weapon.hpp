#ifndef WEAPON_HPP
#define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon {
public:

	Weapon(std::string type);
	~Weapon(void);

	std::string getType();
	void 		setType(std::string type);


private:

	std::string type;

};

#endif
