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
		cout << type_CT << " booked for patient " << patient_lastname << " has been booked for the " << dateExam << " by Staff " << staff << " on the date of " << date;
	}
	else
		cout << "No CT has yet been booked!";

}

void CT::schedule_CT(){
	int choice;

	setAdministrators();

	cout << "Enter the type of CT requested:\n1)CT\2)CTA\nEnter selection: ";
	cin >> choice;
	if (choice == 1)
		type_CT = "CT";
	else if (choice == 2)
		type_CT = "CTA";

	cout << "Enter requested date of CT: ";
	cin >> dateExam;

	cout << "Exam has been booked!" << endl;
}

void CT::addAnnotation(){
	string curr_date;
	string new_note;

	cout << "Please enter the current date: ";
	cin >> curr_date;

	cout << "Please enter your note: ";
	cin>>new_note;

	cout << "The note was read!";


	storeAnnotation(curr_date);
	storeAnnotation("\n");
	storeAnnotation(staff);
	storeAnnotation(": ");
	storeAnnotation(new_note);
	storeAnnotation("\n");

}

void CT::openCT(char *filename){
	char opening[100];

	strcpy(opening, filename);
	strcat(opening, saved_type);

	system(opening);
}
