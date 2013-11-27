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
	int status;			//if status equals 1, then CT has been booked
	char *saved_type;
	string dateExam;
	string type_CT;
public:
	CT();
	void showStatus();
	void schedule_CT();	//choose type of CT wanted
	void addAnnotationCT();
	void openCT();
	void openCT(char *filename);
};


#endif /* CT_HPP_ */
