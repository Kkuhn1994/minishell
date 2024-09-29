#include <iostream>

class Zombie
{
private:
	std::string _name;

public:
	Zombie(std::string name);
	Zombie();
	~Zombie();

	void announce(void);
	void setName(std::string name);
};