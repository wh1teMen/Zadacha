
#include<iostream>
#include<string>
#include"data.h"
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	DB shoping = { "Shopping list" };
	string answer;
	do{
		cout << "����� ������� ������ ���������?\n";
		cout << "Show;\n";
		cout << "Add;\n";
		cout << "Clear;\n";
		cout << "Exit.\n";
		cout << "������� �������:";
		getline(cin, answer);
		if (answer == "Show")
			showDB(shoping);
		else
			if (answer == "Add")
				addNote(shoping);
		if (answer == "Cleae")
			clearNotes(shoping);
		else
			if (answer == "Exit")
				cout << "���������� ���������....\n";
			else
				cout << "������� �� ����������.\n";
	} while (answer!="Exit");
	

	return 0;
}