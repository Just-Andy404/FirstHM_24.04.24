#include "Cat.h"

Cat::Cat() : Pet(), _breed("unknown") {}

Cat::Cat(string breed) : _breed(breed) {}

Cat::Cat(string name, int age, float weight, string breed) :Pet(name, age, weight), _breed(breed) {}


void Cat::setBreed(string breed)
{
	_breed = breed;
}

string Cat::getBreed()
{
	return _breed;
}

void Cat::show()
{
	cout << "CAT" << endl;
	cout << "Name: " << Pet::getName() << endl;
	cout << "Age: " << Pet::getAge() << endl;
	cout << "Weight: " << Pet::getWeight() << endl;
	cout << "Breed: " << _breed << endl;
}
