/*
 * Images.cpp
 *
 *  Created on: Nov 25, 2013
 *      Author: Hamza
 */


#include "Images.hpp"

using namespace std;

Images::Images(){

	staff = "UNAVAILABLE";
	patientLastname = "JOHN_DOE";
	date = "UNAVAILABLE";

}

Images::Images(string doctor, string person, string calender){

	staff = doctor;
	patientLastname = person;
	date = calender;

}

void Images::setAdministrators(){
	cout << "Please enter staff name: ";
	cin >> staff;

	cout << "Please enter the last name of the patient: ";
	cin >> patientLastname;

	cout << "Please enter today's date: ";
	cin >> date;
}

void Images::displayFileInfo(){
	cout << "Staff name is " << staff << endl;
	cout << "Last name of patient is " << patientLastname << endl;
	cout << "File created on date " << date << endl;
}

void Images::openFile(){
	if (!notes.is_open())
		notes.open("output.txt", ios::out|ios::app);
}

void Images::closeFile(){
	if(notes.is_open())
			notes.close();
}

void Images::storeAnnotation(string append){
	openFile();
	notes << append;
	closeFile();
}

void Images::storeAnnotation(char *append){
	openFile();
	notes << append;
	closeFile();
}


