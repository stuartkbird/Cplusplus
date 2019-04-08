#include "conio.h"
#include <iostream>
#include <windows.h>

using namespace std;
void gotoxy(int, int);
void main_menu();
void tea_menu();
void coffee_menu();
void milk_only();
void sugar_only();
void milk_and_sugar();
void cola_menu();
void quit();
void error_message();

char pound = 156;
int option;
int orderCount = 0;

float gross_total = 0;
bool orderplace = true;
string order[10];

int main()
{
	do
	{
		main_menu();
	}
	while (orderplace == true);
	return 0;
	
}

void main_menu()
{
	system("cls");
	gotoxy(5, 1); cout << "DRINKS MENU";
	gotoxy(5, 2); cout << "Please Choose One of the following:";
	gotoxy(5, 4); cout << "1. Tea - " << pound << "1.10";
	gotoxy(5, 5); cout << "2. Coffee - " << pound << "1.20";
	gotoxy(5, 6); cout << "3. Cola - " << pound << "1.30";
	gotoxy(5, 7);
	cin >> option;
	//order[orderCount] = "Tea";
	//orderCount++;
		switch (option)
		{
		case 1:tea_menu(); break;
		case 2:coffee_menu(); break;
		case 3:cola_menu(); break;
			//error message
		default:error_message(); break;
		}

}
void tea_menu()
{
	system("cls");	
	gotoxy(5, 2); cout << "Please Choose One of the following:";
	gotoxy(5, 4); cout << "1. Milk only";
	gotoxy(5, 5); cout << "2. Sugar only";
	gotoxy(5, 6); cout << "3. Milk & Sugar";
	gotoxy(5, 7);
	//gotoxy(5, 7); cout << "4. Sugar";
	cin >> option;
		switch (option)
		{
		case 1:break;
		case 2:break;
		case 3:break;
			//error message
		default:break;
		}
}
void coffee_menu()
{
	system("cls");	
	gotoxy(5, 2); cout << "Please Choose One of the following:";
	gotoxy(5, 4); cout << "1. Milk only";
	gotoxy(5, 5); cout << "2. Sugar only";
	gotoxy(5, 6); cout << "3. Milk & Sugar";
	gotoxy(5, 7);
	cin >> option;
		switch (option)
		{
		case 1:break;
		case 2:break;
		case 3:break;
			//error message
		default:break;
		}
}
void milk_only()
{

}
void sugar_only()
{

}
void milk_and_sugar()
{

}

void cola_menu()
{
	system("cls");	
	gotoxy(5, 2); cout << "Please Choose One of the following:";
	gotoxy(5, 4); cout << "1. Regular";
	gotoxy(5, 5); cout << "2. Diet";
	gotoxy(5, 6); cout << "3. Ice";
	gotoxy(5, 7); cout << "4. No Ice";
	gotoxy(5, 8);
	cin >> option;
		switch (option)
		{
		case 1:break;
		case 2:break;
		case 3:break;
		case 4:break;
			//error message
		default:break;
		}
}
void gotoxy(int x, int y) // Gotoxy is position of the text
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void quit()
{

}
void error_message()
{
	cout << "Error: Invalid Input";
	_getch();
}