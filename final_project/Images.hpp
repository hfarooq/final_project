/*
 * Images.hpp
 *
 *  Created on: Nov 25, 2013
 *      Author: Hamza
 */

#ifndef IMAGES_HPP_
#define IMAGES_HPP_

#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

class Images{
protected:
	string staff;
	string patientLastname;
	string date;
	ofstream notes;
	string dateExam;
	char *saved_type;
	int status;

public:
	Images();
	Images(string doctor, string person, string calender);
	void setAdministrators();
	void displayFileInfo();
	void storeAnnotation(string append);
	void storeAnnotation(char* append);
	void openFile();
	void closeFile();
};



#endif /* IMAGES_HPP_ */
