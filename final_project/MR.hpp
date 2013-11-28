/*
 * MR.hpp
 *
 *  Created on: Nov 26, 2013
 *      Author: Hamza
 */

#ifndef MR_HPP_
#define MR_HPP_

#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <string.h>

#include "Images.hpp"

using namespace std;

class MR : public Images{
private:
	double imagingFrequency;			//in MHz
	double magneticFieldStrength;		//in Tesla
	double spacingBetweenSlices;		//in mm
	string MRAcquisitionType;			//2D=frequency X phase or 3D = frequency X phase X phase

public:
	MR();
	void showStatusContents();
	void schedule_MR();
	void addAnnotationMR();
	void openMR();
	void openMR(char *filename);
};


#endif /* MR_HPP_ */
