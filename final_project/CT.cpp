/*
 * CT.cpp
 *
 *  Created on: Nov 25, 2013
 *      Author: Hamza
 */


#include "CT.hpp"

CT::CT(){
	exposureTime = 30;
	focalPoint = 5;
	distanceSourceDetector = 15;
	distanceSourcePatient = 12;
	xRayTubeCurrent = 10;
	typeCT = "CT";
	saved_type = ".jpg";
	status = 0;
}

void CT::showStatusContents(){
	if (status == 1){
		cout << typeCT << " booked for patient " << patientLastname << " has been booked for the " << dateExam << " by Staff " << staff << " on the date of " << date << endl;
		cout << "Details of the " << typeCT << " are as follows:" << endl;
		cout << "Exposure time is: " << exposureTime << " ms." << endl;
		cout << "Size of focal point is: " << focalPoint << " mm." << endl;
		cout << "Distance from source to detector is: " << distanceSourceDetector << " mm." << endl;
		cout << "Distance from source to patient is: " << distanceSourcePatient << " mm." << endl;
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
		typeCT = "CT";
	else if (choice == 2)
		typeCT = "CTA";

	cout << "Enter the x-ray exposure time (in ms) of the patient: ";
	cin >> exposureTime;

	cout << "Enter the size (in mm) of the focal point: ";
	cin >> focalPoint;

	cout << "Enter the distance (in mm) from source to detector center: ";
	cin >> distanceSourceDetector;

	cout << "Enter the distance (in mm) from source to isocenter (center of field of view): ";
	cin >> distanceSourcePatient;

	cout << "Enter the current (in mA) of the current in the X-ray tube: ";
	cin >> xRayTubeCurrent;

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
