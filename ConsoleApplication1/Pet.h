#pragma once
#include <iostream>
using namespace std;

class Pet
{
	string _name;
	int _age;
	float _weight;
public:
	Pet();
	Pet(string, int, float);
	void setName(string);
	void setAge(int);
	void setWeight(float);
	string getName();
	int getAge();
	float getWeight();
};

