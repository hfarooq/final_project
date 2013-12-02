/*
 * Ultrasound.cpp
 *
 *  Created on: Nov 26, 2013
 *      Author: Hamza
 */


#include "Ultrasound.hpp"


Ultrasound::Ultrasound(){
	//Values given so that some default state can be present
	depthScanField = 0.15;
	focusDepth = 3;
	triggerTime = 2;
	nominalInterval = 10;
	saved_type = ".png";
}

void Ultrasound::showStatusContents(){
	if (status == 1){
		cout << "Ultrasound for patient " << patientLastname << " has been booked for the " << dateExam << " by Staff " << staff << " on the date of " << date << endl;
		cout << "Details of the ultrasound are as follows:" << endl;
		cout << "Depth of scanning field is: " << depthScanField << " mm." << endl;
		cout << "Focus depth is: " << focusDepth << " cm." << endl;
		cout << "Trigger time is: " << triggerTime << " ms." << endl;
		cout << "Nominal interval is: " << nominalInterval << " ms." << endl;
	}
	else{
		cout << "No ultrasound has yet been booked!" << endl;
	}
}

void Ultrasound::schedule_US(){

	setAdministrators();

	cout << "Enter the depth of the scanning field (in mm): ";
	cin >> depthScanField;

	cout << "Enter the focus depth (in cm): ";
	cin >> focusDepth;

	cout << "Enter the time (in ms) from the start of R-wave to the beginning of data acquisition: ";
	cin >> triggerTime;

	cout << "Enter the time (in ms) of the average R-R interval needed: ";
	cin >> nominalInterval;

	cout << "Enter requested date of the ultrasound: ";
	cin >> dateExam;

	cout << "Exam has been booked!" << endl;

	status = 1;
}

void Ultrasound::addAnnotationUS(){
	string curr_date;
	string new_note;
	string person;

	cout << "Please enter your name: ";
	getline(cin, person);	//The code skips over this getline, so it must be repeated
	getline(cin, person);

	cout << "Please enter your note: ";
	getline(cin, new_note);

	cout << "Please enter the current date: ";
	getline(cin, curr_date);

	storeAnnotation("\n");
	storeAnnotation("Ultrasound note for ");
	storeAnnotation(patientLastname);
	storeAnnotation("\n");
	storeAnnotation(curr_date);
	storeAnnotation("\n");
	storeAnnotation(person);
	storeAnnotation(": ");
	storeAnnotation(new_note);
	storeAnnotation("\n");
}

void Ultrasound::openUS(){
	string opening;
	string filename;
	string program;

	cout << "Please enter the filename of the image you wish to view: " << endl;
	getline(cin, filename);

	cout << "Enter the kind of image viewer you wish to use: " << endl;
	getline(cin, program);

	opening = program + " " + filename;

	system(opening.c_str());
}

//Only works on windows
void Ultrasound::openUS(char *filename){
	char opening[100];

	strcpy(opening, filename);
	strcat(opening, saved_type);

	system(opening);
}
