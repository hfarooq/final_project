/*
 * CT.cpp
 *
 *  Created on: Nov 25, 2013
 *      Author: Hamza
 */


#include "CT.hpp"

CT::CT(){
	type_CT = "NA";
	saved_type = ".jpg";
	status = 0;
}

void CT::showStatus(){
	if (status == 1){
		cout << type_CT << " booked for patient " << patient_lastname << " has been booked for the " << dateExam << " by Staff " << staff << " on the date of " << date << endl;
	}
	else{
		cout << "No CT has yet been booked!" << endl;
	}
}

void CT::schedule_CT(){
	int choice;

	setAdministrators();

	cout << "Enter the type of CT requested:\n1)CT\n2)CTA\nEnter selection: ";
	cin >> choice;
	if (choice == 1)
		type_CT = "CT";
	else if (choice == 2)
		type_CT = "CTA";

	cout << "Enter requested date of CT: ";
	cin >> dateExam;

	cout << "Exam has been booked!" << endl;

	status = 1;
}

void CT::addAnnotationCT(){
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
	storeAnnotation("CT note\n");
	storeAnnotation(curr_date);
	storeAnnotation("\n");
	storeAnnotation(person);
	storeAnnotation(": ");
	storeAnnotation(new_note);
	storeAnnotation("\n");
}

void CT::openCT(){
	char opening[100];
	char filename[75];

	cout << "Please enter filename of the image you wish to view: " << endl;
	cin >> filename;

	strcpy(opening, filename);
	strcat(opening, saved_type);

	system(opening);
}

void CT::openCT(char *filename){
	char opening[100];

	strcpy(opening, filename);
	strcat(opening, saved_type);

	system(opening);
}
