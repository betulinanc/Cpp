#include "Zombie.hpp"

int main()
{
	Zombie normalZombie("normalZombie");
	Zombie *ptrZombie = newZombie("ptrZombie");
	randomChump("normalZombie2");
	normalZombie.announce();
	//ptrZombie -> announce();
	delete ptrZombie;
	return (0);
}
