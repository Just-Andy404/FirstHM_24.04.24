#pragma once
#include "Pet.h"

class Dog : Pet
{
	string _breed;
public:
	Dog();
	Dog(string);
	Dog(string, int, float, string);
	void getBread(string);
	string getBreed();
	void show();
};

