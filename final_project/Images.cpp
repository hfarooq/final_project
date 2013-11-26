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
	patient_name = "UNAVAILABLE";
	date = "UNAVAILABLE";

}


Images::Images(string doctor, string person, string calender){

	staff = doctor;
	patient_name = person;
	date = calender;

}
