/*
 * Ultrasound.cpp
 *
 *  Created on: Nov 26, 2013
 *      Author: Hamza
 */


#include "Ultrasound.hpp"


Ultrasound::Ultrasound(){
	saved_type = ".jpg";
}

void Ultrasound::addAnnotationUS(){
	string curr_date;
	string new_note;
	string person;

	cout << "Please enter your note: ";
	getline(cin, new_note);

	cout << "Please enter your name: ";
	getline(cin, person);

	cout << "Please enter the current date: ";
	cin >> curr_date;

	storeAnnotation("\n");
	storeAnnotation("Ultrasound note\n");
	storeAnnotation(curr_date);
	storeAnnotation("\n");
	storeAnnotation(person);
	storeAnnotation(": ");
	storeAnnotation(new_note);
	storeAnnotation("\n");
}

void Ultrasound::openUS(){
	char opening[100];
	char filename[75];

	cout << "Please enter filename of the image you wish to view: " << endl;
	cin >> filename;

	strcpy(opening, filename);
	strcat(opening, saved_type);

	system(opening);
}

void Ultrasound::openUS(char *filename){
	char opening[100];

	strcpy(opening, filename);
	strcat(opening, saved_type);

	system(opening);
}
