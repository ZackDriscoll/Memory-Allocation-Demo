#pragma once
#include <string>


class Character
{
public:
	//Create the four variables with primitive data types
	//These variables track the character's name, what they say, their midichlorian count, and if they're a Jedi
	std::string Name;
	std::string stuffToSay;
	int midichlorians;
	bool isJedi;

	//Function to have the charcter show off their values (variables)
	void Talk();

};

