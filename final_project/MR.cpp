/*
 * MR.cpp
 *
 *  Created on: Nov 26, 2013
 *      Author: Hamza
 *      MR in .bmp
 */


#include "MR.hpp"

MR::MR(){
	//Values given so that some default state can be present
	imagingFrequency = 3;
	magneticFieldStrength = 1.5;
	spacingBetweenSlices = 4;
	MRAcquisitionType = "2D";
	saved_type = ".bmp";
}

void MR::showStatusContents(){
	if (status==1){
		cout << "MR for patient " << patientLastname << " has been booked for the " << dateExam << " by Staff " << staff << " on the date of " << date << endl;
		cout << "Details of the MR are as follows:" << endl;
		cout << "Acquisition type is: " << MRAcquisitionType << "." << endl;
		cout << "Imaging frequency is: " << imagingFrequency << " MHz." << endl;
		cout << "Magnetic field strength is: " << magneticFieldStrength << " Tesla." << endl;
		cout << "Spacing between slices is: " << spacingBetweenSlices << " mm." << endl;
	}
	else{
		cout << "No MR has yet been booked!" << endl;
	}
}

void MR::schedule_MR(){
	int choice;

	setAdministrators();

	cout << "Enter the type of MR requested:\n1)2D\n2)3D\nEnter selection: ";
	cin >> choice;
	if (choice == 1)
		MRAcquisitionType = "2D";
	else if (choice == 2)
		MRAcquisitionType = "3D";

	cout << "Enter the imaging frequency (in MHz) desired: ";
	cin >> imagingFrequency;

	cout << "Enter the magnetic field strength (in Tesla) desired: ";
	cin >> magneticFieldStrength;

	cout << "Enter the spacing between slices (in mm) desired: ";
	cin >> spacingBetweenSlices;

	cout << "Enter requested date of CT: ";
	cin >> dateExam;

	cout << "Exam has been booked!" << endl;

	status = 1;
}

void MR::addAnnotationMR(){
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
	storeAnnotation("Magnetic Resonance note\n");
	storeAnnotation(curr_date);
	storeAnnotation("\n");
	storeAnnotation(person);
	storeAnnotation(": ");
	storeAnnotation(new_note);
	storeAnnotation("\n");
}

void MR::openMR(){
	char opening[100];
	char filename[75];

	cout << "Please enter filename of the image you wish to view (if using Linux, enter gnome- before file name): " << endl;
	cin >> filename;

	strcpy(opening, filename);
	strcat(opening, saved_type);

	system(opening);
}

void MR::openMR(char *filename){
	char opening[100];

	strcpy(opening, filename);
	strcat(opening, saved_type);

	system(opening);
}
