/*
 * MR.cpp
 *
 *  Created on: Nov 26, 2013
 *      Author: Hamza
 */


#include "MR.hpp"

MR::MR(){
	saved_type = ".jpg";
}

void MR::addAnnotationMR(){
	string curr_date;
	string new_note;
	string person;

	cout << "Please enter your note: ";
	getline(cin, new_note);

	cout << "Please enter your name: ";
	getline(cin, person);

	cout << "Please enter the current date: ";
	cin >> curr_date;					//ask how to read full line until enter instead of just until space

	storeAnnotation("\n");
	storeAnnotation("Magnetic Resonance note\n");
	storeAnnotation(curr_date);
	storeAnnotation("\n");
	storeAnnotation(person);
	storeAnnotation(": ");
	storeAnnotation(new_note);
	storeAnnotation("\n");
}

void MR::openMR(char *filename){
	char opening[100];

	strcpy(opening, filename);
	strcat(opening, saved_type);

	system(opening);
}
