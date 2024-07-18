#include "Dog.h"

Dog::Dog() : Pet(), _breed("unknown") {}

Dog::Dog(string bread) : Pet(), _breed(bread) {}

Dog::Dog(string name, int age, float weight, string breed) : Pet(name, age, weight), _breed(breed) {}

void Dog::getBread(string breed)
{
	_breed = breed;
}

string Dog::getBreed()
{
	return _breed;
}

void Dog::show()
{
	cout << "DOG" << endl;
	cout << "Name: " << Pet::getName() << endl;
	cout << "Age: " << Pet::getAge() << endl;
	cout << "Weight: " << Pet::getWeight() << endl;
	cout << "Breed: " << _breed << endl;
}
