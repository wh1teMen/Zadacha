#include<iostream>
#include"data.h"
#include<string>
void addNote(DB &base) {
	std::string str;
	std::cout << "¬веди новыую запись:\n";
	getline(std::cin, str);
	base.notes += str+"\n";
	base.notesCount++;
}

void clearNotes(DB& base) {
	base.notes = " ";
	base.notesCount = 0;
}

void showDB(DB& base) {
	std::cout << "Title: " << base.title << std::endl;
	std::cout << "Notes number: " << base.notesCount << std::endl;
		std::cout <<"Notes"<< base.notes << std::endl;
}