#include "Character.h"
#include <iostream>


void Character::Talk()
{
	std::cout << "\n\n" + Name + " says, " + stuffToSay + "\n";
	std::cout << Name + " has a midichlorian count of " << midichlorians << ". ";

	if (isJedi == true)
	{
		std::cout << Name + " is a Jedi.\n\n";
	}
	else
	{
		std::cout << Name + " is not a Jedi.\n\n";
	}
}