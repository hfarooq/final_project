/*
 * CT.hpp
 *
 *  Created on: Nov 25, 2013
 *      Author: Hamza
 *
 *      CT is saved as .jpg
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
	double exposureTime;			//in ms
	double focalPoint;				//in mm
	double distanceSourceDetector;	//in mm
	double distanceSourcePatient;	//in mm
	double xRayTubeCurrent;			//in mA
	string typeCT;					//CT versus CTA

public:
	CT();
	void showStatusContents();
	void schedule_CT();
	void addAnnotationCT();
	void openCT();
	void openCT(char *filename);		//Only works on windows
};


#endif /* CT_HPP_ */
