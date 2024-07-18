#pragma once
#include "Pet.h"

class Cat : Pet
{
	string _breed;
public:
	Cat();
	Cat(string);
	Cat(string, int, float, string);
	void setBreed(string);
	string getBreed();
	void show();
};

