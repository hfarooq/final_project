/*
 * Physical.cpp
 *
 *  Created on: Nov 18, 2013
 *      Author: Ashkan
 */

#include <string>
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <sstream>
#include <string.h>
#include <iosfwd>
#include <iostream>
#include <fstream>
#include "Physical.hpp"
using namespace std;

test::test(){
	administrator = "Empty";
	date = 0;
	time = 0;
}
vital::vital(){

	temperature = 0;
	respiration= 0;
	pulse = 0;

}

pressure::pressure(){
	sys=0;
	dias=0;

}

urine::urine(){
	ph = 0;
	sugar = 0;
	protein = 0;
}

void test::addAnnotation(string name, string annotation)
{

	char mystring[1000];
	cout << "Please enter the date of test(yymmdd):" << endl;
	cin >> date;
	cout << "Please enter the time (hhmm):" << endl;
	cin >> time;
	sprintf(mystring, "\nAnnotation: [%15s] Note: [%s] Date: [%0d] Time: [%0d]", name.c_str(), annotation.c_str(), date, time);
	appendToPatientFile(mystring);
}


void test::getinfo(){
	int choice;
	cout << "Please choose your position:" << endl;
	cout << "1) Doctor" << endl;
	cout << "2) Nurse" << endl;
	cout << "3) Radiologist" << endl;
	cin >> choice;
	switch (choice){
	case 1:
		administrator = "Doctor";
		break;
	case 2:
		administrator = "Nurse";
		break;
	case 3:
		administrator = "Radiologist";
		break;
	}
	cout << "Please enter the date of test(yymmdd):" << endl;
	cin >> date;
	cout << "Please enter the time (hhmm):" << endl;
	cin >> time;
}

void vital::getvital(){

	cout << "Please enter the body temperature in Celsius:" << endl;
	cin >> temperature;
	cout << "Please enter the respiration rate:" << endl;
	cin >> respiration;
	cout << "Please enter the pulse rate:" << endl;
	cin >> pulse;

}
void vital::checkvital(){

	char str[1000];
			char str2[1000];
			char str3[1000];
			char str4[1000];
			cout << "Vital signs test summary:"<<endl;
				sprintf(str, "Vital signs test summary:");

	// Check temperature
	if (temperature<=36.5){
		cout <<"The temperature is lower than the normal range!"<<endl;
		sprintf(str2, "\nThe temperature is lower than the normal range!");
	}
	else if ((36.5<temperature) && (temperature<37.2)){
		cout <<"The temperature is within the normal range!"<<endl;
		sprintf(str2, "\nThe temperature is within the normal range!");
	}
	else if (temperature >= 37.2){
		cout <<"The temperature is higher than normal range!"<<endl;
		sprintf(str2, "\nThe temperature is higher than normal range!");
	}

	// Check respiration rate

	if (respiration<=12){
		cout <<"The respiration rate is lower than the normal range!"<<endl;
		sprintf(str3, "\nThe respiration rate is lower than the normal range!");
	}
	else if (12<respiration && respiration<21){
		cout <<"The respiration rate is within the normal range!"<<endl;
		sprintf(str3, "\nThe respiration rate is within the normal range!");
	}
	else if (respiration>=21){
		cout <<"The respiration rate is higher than normal range!"<<endl;
		sprintf(str3, "\nThe respiration rate is higher than normal range!");
	}

	// Check pulse rate

	if (pulse<=60){
		cout <<"The pulse rate is lower than the normal range!"<<endl;
		sprintf(str4, "\nThe respiration rate is higher than normal range!");
	}
	else if (60<pulse && pulse<100){
		cout <<"The pulse rate is within the normal range!"<<endl;
		sprintf(str4, "\nThe pulse rate is within the normal range!");
	}
	else if (pulse>=100){
		cout <<"The pulse rate is higher than the normal range!"<<endl;
		sprintf(str4, "\nThe pulse rate is higher than the normal range!");
	}
	appendToPatientFile(str);
		appendToPatientFile(str2);
		appendToPatientFile(str3);
		appendToPatientFile(str4);

}
void pressure::getpressure(){
	cout << "Please enter the systolic pressure in mmHg:" << endl;
	cin >> sys;
	cout << "Please enter the diastolic pressure in mmHg:" << endl;
	cin >> dias;

}
void pressure::checkpressure(){
	// Check sys
	char str[1000];
	char str2[1000];
	char str3[1000];
	cout << "Blood pressure test summary:"<<endl;
	sprintf(str, "Blood pressure test summary:");

	if (sys>=120){
		cout <<"The systolic pressure is higher than the normal range!"<<endl;
		sprintf(str2, "\nThe systolic pressure is higher than the normal range!");
	}

	else if (sys<120){
		cout <<"The systolic pressure is in the normal range!"<<endl;
		sprintf(str2, "\nThe systolic pressure is in the normal range!");
	}

	// Check Dias

	if (dias>=80){
		cout <<"The diastolic pressure is lower than the normal range!"<<endl;
		sprintf(str3, "\nThe diastolic pressure is lower than the normal range!");
	}

	else if (dias<80){
		cout <<"The diastolic pressure is in the the normal range!"<<endl;
		sprintf(str3, "\nThe diastolic pressure is lower than the normal range!");
	}
	appendToPatientFile(str);
		appendToPatientFile(str2);
		appendToPatientFile(str3);


}
void urine::geturine(){
	cout << "Please enter the pH:" << endl;
	cin >> ph;
	cout << "Please enter the amount of sugar:" << endl;
	cin >> sugar;
	cout << "Please enter the amount of protein:" << endl;
	cin >> protein;


}
void urine::checkurine(){
	char str[1000];
		char str2[1000];
		char str3[1000];
		char str4[1000];
		cout << "Urine test summary:"<<endl;
		sprintf(str, "Urine test summary:");
	// check ph
	if (ph<5){
		cout <<"The pH is lower than the normal range!"<<endl;
		sprintf(str2, "\nThe pH is lower than the normal range!");

	}
	else if (5<=ph && ph<=7){
		cout <<"The pH is within the normal range!"<<endl;
		sprintf(str2, "\nThe pH is within the normal range!");
	}
	else if (ph>7){
		cout <<"The pH is higher than the normal range!"<<endl;
		sprintf(str2, "\nThe pH is within the normal range!");
	}
	// check sugar

	if (sugar == 0){
		cout <<"No sugar was detected in the sample. Normal!"<<endl;
		sprintf(str3, "\nNo sugar was detected in the sample. Normal!");
	}

	else if (sugar != 0){
		cout <<"Sugar was detected in the sample. Abnormal!"<<endl;
		sprintf(str3, "\nSugar was detected in the sample. Abnormal!");
	}
	// check protein

	if (protein == 0){
		cout <<"No protein was detected in the sample. Normal!"<<endl;
		sprintf(str4, "\nNo protein was detected in the sample. Normal!");
	}

	else if (protein != 0){
		cout <<"Protein was detected in the sample. Abnormal!"<<endl;
		sprintf(str4, "\nProtein was detected in the sample. Abnormal!");
	}

	appendToPatientFile(str);
	appendToPatientFile(str2);
	appendToPatientFile(str3);
	appendToPatientFile(str4);


}

void vital::appendTestToPhysicalFile()
{
	char mystring[1000];
	sprintf(mystring, "\n\n***Vital sign summary:***      \n" \
					 "Test Administrator       = [%s]\n" \
					 "The date and time          =%0d, %0d\n"
					 "Temperature = %0f\n" \
					 "Respiration rate:  = %0d\n"
					 "Pulse:    = %0d\n",
					 administrator.c_str(),date,time, temperature, respiration, pulse);


		appendToPatientFile(mystring);

}

void urine::appendTestToPhysicalFile()
{
	char mystring[1000];

	sprintf(mystring, "\n\n***Urine test summary:***  \n" \
				 "Test Administrator       = [%s]\n" \
				 "The date and time          =%0d, %0d\n"
				 "pH = %0lf\n" \
				 "Protein   = %0lf\n"
				 "Sugar    = %0lf\n",
				administrator.c_str(),date,time, ph, protein, sugar);

	appendToPatientFile(mystring);


}

void pressure::appendTestToPhysicalFile()
{
	char mystring[1000];


	sprintf(mystring, "\n\n***Blood pressure summary:***\n" \
				 "Test Administrator       = [%s]\n" \
				 "The date and time          =%0d, %0d\n"
				 "Diastolic pressure = %0lf\n" \
				 "Systolic pressure   = %0lf\n",
				administrator.c_str(),date,time, dias, sys);

	appendToPatientFile(mystring);
}

void test::appendToPatientFile(string mystring){
	openPatientFile();
	PatientFile << mystring;
	closePatientFile();
}

void test::openPatientFile()
{
	if (! PatientFile.is_open() )
	{
		PatientFile.open("PhysicalFile.txt", ios::out | ios::app);
	}
}

void test::closePatientFile()
{

	if (PatientFile.is_open() )
	{
		PatientFile.close();
	}
}
