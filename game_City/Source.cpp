#include <string>
#include <iostream>
#include <fstream>
#include <Windows.h>
#include"game.h"
using namespace std;

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	CitiesLogic c("city.csv");
	while (1)
	{
		cout << "Enter city\n";
		string city;
	}
	system("pause");
}