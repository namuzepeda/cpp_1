#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>
# include "Utils.hpp"

class Zombie {
public:

	Zombie(std::string name);
	~Zombie(void);

	std::string getName();
	bool 		setName(std::string name);
	void		announce( void );


private:

	std::string name;

};

void randomChump( std::string name );
Zombie *newZombie(std::string name);



#endif
