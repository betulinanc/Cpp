#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name)
{
	this -> name = name;
}

Zombie::~Zombie()
{
	std::cout << name << " is dead !" << std::endl;
}

void	Zombie::announce()
{
	std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string	Zombie::getName() const
{
	return (name);
}

void	Zombie::setName(std::string name)
{
	this -> name = name;
}
