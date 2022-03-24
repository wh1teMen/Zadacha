
#include<iostream>
#include<string>
#include"data.h"
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	DB shoping = { "Shopping list" };
	string answer;
	do{
		cout << "Какую команду хотите выполнить?\n";
		cout << "Show;\n";
		cout << "Add;\n";
		cout << "Clear;\n";
		cout << "Exit.\n";
		cout << "Введите команду:";
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
				cout << "Завершение программы....\n";
			else
				cout << "Команда не обнаружена.\n";
	} while (answer!="Exit");
	

	return 0;
}