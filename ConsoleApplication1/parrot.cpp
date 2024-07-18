#include "parrot.h"

parrot::parrot() : Pet(), _breed("unknown") {}

parrot::parrot(string breed) :Pet(), _breed(breed) {}
parrot::parrot(string name, int age, float weight, string breed) :Pet(name, age, weight), _breed(breed) {}

void parrot::setBreed(string breed)
{
	_breed = breed;
}

string parrot::getBreed()
{
	return _breed;
}

void parrot::show()
{
	cout << "CAT" << endl;
	cout << "Name: " << Pet::getName() << endl;
	cout << "Age: " << Pet::getAge() << endl;
	cout << "Weight: " << Pet::getWeight() << endl;
	cout << "Breed: " << _breed << endl;
}
