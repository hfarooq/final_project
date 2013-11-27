/*
 * CT.hpp
 *
 *  Created on: Nov 25, 2013
 *      Author: Hamza
 */

#ifndef CT_HPP_
#define CT_HPP_

#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <string.h>

#include "Images.hpp"

using namespace std;

class CT : public Images{
private:
	double exposureTime;	//in ms
	double focalPoint;		//in mm
	double distanceSourceDetector;	//in mm
	double distanceSourcePatient;	//in mm
	double xRayTubeCurrent;			//in mA
	string typeCT;			//CT versus CTA
	string dateExam;
	char *saved_type;
	int status;			//if status equals 1, then CT has been booked

public:
	CT();
	void showStatusContents();
	void schedule_CT();	//choose type of CT wanted
	void addAnnotationCT();
	void openCT();
	void openCT(char *filename);
};


#endif /* CT_HPP_ */
