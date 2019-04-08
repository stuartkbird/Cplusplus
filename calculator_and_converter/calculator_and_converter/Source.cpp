#include<iostream>
#include "conio.h"
#include <limits>

using namespace std;

void menu();

void add();
void subtract();
void multiply();
void divide();

int number1;
int number2;
int answer;

int weights();

void lbs_to_kg();
void kg_to_lbs();
void exit();


float lbs;
float kg;
float fanswer;

int main()
{
	//_getch(); = conio.h
	// cout and cin == iosteam

	//return 0;
	menu();
}

void menu()
{
	int option;

	cout << "Please choose one of the following";
	cout << endl;
	cout << "1. Add";
	cout << endl;
	cout << "2. Subtract";
	cout << endl;
	cout << "3. Multiply";
	cout << endl;
	cout << "4. Divide";
	cout << endl;
	cout << "5. To Convert lbs to kg";
	cout << endl;
	cout << "6. To Convert kg to lbs";
	cout << endl;
	cout << "7. Exit";
	cout << endl;
	cin >> option;

	switch (option)
	{
	case 1: add(); break;
	case 2: subtract(); break;
	case 3: multiply(); break;
	case 4: divide(); break;
	case 5: lbs_to_kg(); break;
	case 6: kg_to_lbs(); break;
	case 7: exit(); break;
	default: break;
	}
	_getch();
}

void add()
{
	cin >> number1;
	if (cin.fail())
	{
		cout << "Error Incorrect Data Type Entered";
	}
	else if (!cin.fail())
	{
		cout << "Please Enter Second Number";
	}

	cin >> number2;
	if (cin.fail())
	{
		cout << "Error Incorrect Data Type Entered";
	}
	else if (!cin.fail())
	{
		cout << "";
	}
	answer = number1 + number2;
	cout << answer;
}

void subtract()
{
	cin >> number1;
	if (cin.fail())
	{
		cout << "Error Incorrect Data Type Entered";
	}
	else if (!cin.fail())
	{
		cout << "Please Enter Second Number";
	}
	cin >> number2;
	if (cin.fail())
	{
		cout << "Error Incorrect Data Type Entered";
	}
	else if (!cin.fail())
	{
		cout << "";
	}
	answer = number1 - number2;
	cout << answer;
}

void multiply()
{
	cin >> number1;
	if (cin.fail())
	{
		cout << "Error Incorrect Data Type Entered";
	}
	else if (!cin.fail())
	{
		cout << "Please Enter Second Number";
	}
	cin >> number2;
	if (cin.fail())
	{
		cout << "Error Incorrect Data Type Entered";
	}
	else if (!cin.fail())
	{
		cout << "";
	}
	answer = number1 * number2;
	cout << answer;
}

void divide()
{
	float number1a;
	float number2a;
	float answera;

	cin >> number1a;
	if (cin.fail() || number1a == 0)
	{
		cout << "Error Incorrect Data Type Entered or 0 Entered";
	}
	else if (!cin.fail())
	{
		cout << "Please Enter Second Number";
	}
	cin >> number2a;
	if (cin.fail() || number2a == 0)
	{
		cout << "Error Incorrect Data Type Entered or 0 Entered";
	}
	else if (!cin.fail())
	{
		cout << "";
	}
	answera = number1a / number2a;
	cout << answera;
}
void lbs_to_kg()
{
	cout << "Please enter number: ";
	cin >> lbs;
	fanswer = lbs * 0.45359237;
	cout << fanswer << "kg";
	_getch();
	system("CLS");
	weights();
}

void kg_to_lbs()
{
	cout << "Please enter number: ";
	cin >> kg;
	fanswer = kg / 0.45359237;
	cout << fanswer << "lbs";
	_getch();
	system("CLS");
	weights();
}
int weights()
{
	return 0;
}
void exit()
{
	system("CLS");
	cout << "Thanks, see you soon.";
	_getch();
}