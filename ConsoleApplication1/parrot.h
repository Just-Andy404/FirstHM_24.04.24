#pragma once
#include "Pet.h"

class parrot : Pet
{
	string _breed;
public:
	parrot();
	parrot(string);
	parrot(string, int, float, string);
	void setBreed(string);
	string getBreed();
	void show();

};

