/*
Создать базовый класс "Домашнее животное" и производные
классы "Собака", "Кошка", "Попугай". С помощью конструктора
установить имя каждого животного и его характеристики.
*/

#include <iostream>
#include "Pet.h"
#include "Cat.h"
#include "Dog.h"
#include "parrot.h"
using namespace std;



int main()
{
	Dog pet1;
	pet1.show();
	cout << "=============================" << endl;
	Dog pet2("York");
	pet2.show();
	cout << "=============================" << endl;
	Dog pet3("Stella", 10, 22, "York");
	pet3.show();
	cout << "=============================" << endl;
	return 0;
}