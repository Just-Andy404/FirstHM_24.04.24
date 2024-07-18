#include "Pet.h"

Pet::Pet() : Pet("noName", 0, 0.0) {}

Pet::Pet(string name, int age, float weight)
{
	_name = name;
	_age = age;
	_weight = weight;
}

void Pet::setName(string name)
{
	_name = name;

}

void Pet::setAge(int age)
{
	_age = age;
}

void Pet::setWeight(float weight)
{
	_weight = weight;
}

string Pet::getName()
{
	return _name;
}

int Pet::getAge()
{
	return _age;
}

float Pet::getWeight()
{
	return _weight;
}
