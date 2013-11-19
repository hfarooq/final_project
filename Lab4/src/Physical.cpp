/*
 * Physical.cpp
 *
 *  Created on: Nov 18, 2013
 *      Author: Ashkan
 */


#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <math.h>
#include <cstdlib>
#include <iosfwd>
#include "Physical.hpp"
using namespace std;

test::test(){
	administrator = "Empty";
	annotation = "Empty";
	date= 0;
	time= 0;



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

	// Check temperature
	if (temperature<=36.5){
		cout <<"The temperature is lower than the normal range!"<<endl;
	}
	else if ((36.5<temperature) && (temperature<37.2)){
		cout <<"The temperature is within the normal range!"<<endl;
	}
	else if (temperature >= 37.2){
		cout <<"The temperature is higher than normal range!"<<endl;
	}

	// Check respiration rate

	if (respiration<=12){
		cout <<"The respiration rate is lower than the normal range!"<<endl;
	}
	else if (12<respiration && respiration<21){
		cout <<"The respiration rate is within the normal range!"<<endl;
	}
	else if (respiration>=21){
		cout <<"The respiration rate is higher than normal range!"<<endl;
	}

	// Check pulse rate

	if (respiration<=60){
		cout <<"The pulse rate is lower than the normal range!"<<endl;
	}
	else if (60<respiration && respiration<100){
		cout <<"The pulse rate is within the normal range!"<<endl;
	}
	else if (respiration>=100){
		cout <<"The pulse rate is higher than the normal range!"<<endl;
	}


}
void pressure::getpressure(){
	cout << "Please enter the systolic pressure in mmHg:" << endl;
	cin >> sys;
	cout << "Please enter the diastolic pressure in mmHg:" << endl;
	cin >> dias;

}
void pressure::checkpressure(){
	// Check sys
	if (sys>=120){
		cout <<"The systolic pressure is higher than the normal range!"<<endl;
	}

	else if (sys<120){
		cout <<"The systolic pressure is in normal range!"<<endl;
	}

	// Check Dias

	if (dias>=80){
		cout <<"The diastolic pressure is lower than the normal range!"<<endl;
	}

	else if (dias<80){
		cout <<"The diastolic pressure is in the the normal range!"<<endl;
	}


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
	// check ph
	if (ph<5){
		cout <<"The pH is lower than the normal range!"<<endl;
	}
	else if (5<=ph && ph<=7){
		cout <<"The pH is within the normal range!"<<endl;
	}
	else if (ph>7){
		cout <<"The pH is higher than the normal range!"<<endl;
	}
	// check sugar

	if (sugar == 0){
		cout <<"No sugar was detected in the sample. Normal!"<<endl;
	}

	else if (sugar != 0){
		cout <<"Sugar was detected in the sample. Abnormal!"<<endl;
	}
	// check protein

	if (protein == 0){
		cout <<"No protein was detected in the sample. Normal!"<<endl;
	}

	else if (protein != 0){
		cout <<"Protein was detected in the sample. Abnormal!"<<endl;
	}

}
