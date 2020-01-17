// Game-MadCrody.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "game.h"
int main()
{
	setlocale(LC_ALL, "rus");
	game game;
	game.menu();

	system("pause");
}