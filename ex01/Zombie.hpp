#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>
# include "Utils.hpp"

class Zombie {
public:

	Zombie(std::string name);
	Zombie(void);
	~Zombie(void);

	std::string getName();
	bool 		setName(std::string name);
	void		announce( void );


private:

	std::string name;

};

Zombie* zombieHorde( int N, std::string name );

#endif
