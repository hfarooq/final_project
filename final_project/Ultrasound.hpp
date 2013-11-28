/*
 * Ultrasound.hpp
 *
 *  Created on: Nov 26, 2013
 *      Author: Hamza
 */

#ifndef ULTRASOUND_HPP_
#define ULTRASOUND_HPP_

#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <string.h>

#include "Images.hpp"

using namespace std;

class Ultrasound : public Images{
private:
	double depthScanField;		//depth in mm from the transducer face to the deepest point included in the displayed image
	double focusDepth;			//depth from the transducer face in cm
	double triggerTime;			//time in ms from start of R-wave to the beginning of data taking
	double nominalInterval;		//time in ms of average R-R interval used for these data

public:
	Ultrasound();
	void showStatusContents();
	void schedule_US();
	void addAnnotationUS();
	void openUS();
	void openUS(char *filename);
};


#endif /* ULTRASOUND_HPP_ */
