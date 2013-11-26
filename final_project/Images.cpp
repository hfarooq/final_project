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
	patient_lastname = "UNAVAILABLE";
	date = "UNAVAILABLE";

}

Images::Images(string doctor, string person, string calender){

	staff = doctor;
	patient_lastname = person;
	date = calender;

}

void Images::setAdministrators(){
	cout << "Please enter staff name: ";
	cin >> staff;

	cout << "Please enter patient name: ";
	cin >> patient_lastname;

	cout << "Please enter today's date: ";
	cin >> date;
}

void Images::displayFileInfo(){
	cout << "Staff name is " << staff << endl;
	cout << "Patient name is " << patient_lastname << endl;
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

void Images::addAnnotation(string append){
	openFile();
	notes << append;
	closeFile();
}
