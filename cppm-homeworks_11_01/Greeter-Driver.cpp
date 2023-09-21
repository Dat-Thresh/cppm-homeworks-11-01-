#include <iostream>
#include "GreeterHeader.h"
#include <Windows.h>
int main() {
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::string name;
	std::cout << "¬ведите им€: ";
	getline(std::cin, name);
	Greeter word;
	std::cout << word.greet(name);
	return 0;
}