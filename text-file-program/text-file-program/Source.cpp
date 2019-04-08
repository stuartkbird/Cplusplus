#include<iostream>
#include<fstream>
#include"conio.h"

using namespace std;
bool status = true;
int create();
int write();
void menu();
void appQuit();
int main()
{
	do
	{
		menu();
	}
	while (status!= false);
	return 0;
}

void menu()
{
	system("cls"); //clear up screen
	int option;

	cout << "Ola User\n";
	cout << "1. Create a file\n";
	cout << "2. Open existing file\n";
	cout << "3. Close file\n";
	cout << "4. Write to a file(Override)\n";
	cout << "5. Append to a text file\n";
	cout << "6. Exit...\n";

	cin >> option;

	switch (option)
	{
	case 1:create();break;
	case 2:break;
	case 3:break;
	case 4:write();break;
	case 5:break;
	case 6:appQuit();break;
	default:break;
	}
}
int create()//working 13/09/18 15:12
{
	//if not set to ofstream, file creation won't work
	//ofstream myFile("C:/Users/stuartbird/Desktop/text-file-creation-testing.txt"); //college pc
	ofstream myFile("C:/Users/Stuart/Desktop/text-file-creation-testing.txt"); //home pc
	myFile.close();
	system("cls");
	cout << "Pre alpha phase, file has been created.";
	_getch();
	return 0;
}

int write()
{
	cout << "The write function is to blame\n";
	char message[32];

	system("cls");
	//ofstream myFile("C:/Users/stuartbird/Desktop/text-file-creation-testing.txt"); //college pc
	ofstream myFile("C:/Users/Stuart/Desktop/text-file-creation-testing.txt"); //home pc
	cout << "File opened...\n";
	//cin.getline(message, 32);
	cin >> message;
	myFile << message << endl;
	myFile.close();
	cout << "File closed...\n";
	cout << "Would you like to soee you text file in a Windows environment?";
	char user;
	cin >> user;

	if (user == 'y' || user == 'Y')
		//system("notepad C:/Users/stuartbird/Desktop/text-file-creation-testing.txt"); //college pc
		system("notepad C:/Users/Stuart/Desktop/text-file-creation-testing.txt"); //home pc
	_getch();
	return 0;
}

void appQuit()//working 13/09/18 14:42
{
	char choice;
	cout << "Are you sure you want to exit?";
	cin >> choice;

	if (choice == 'y' || choice == 'Y')
	{
		status = false;
	}
}