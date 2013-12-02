/*
 * main.cpp
 *
 *  Created on: Nov 12, 2013
 *      Author: Hamza
 *      CT scans must be saved in .jpg, Ultrasound in .png, and MR in .bmp
 */


#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <string.h>
#include "Images.hpp"
#include "CT.hpp"
#include "Ultrasound.hpp"
#include "MR.hpp"

using namespace std;

int main(void){

	CT test1;
	Ultrasound test2;
	MR test3;


	test1.showStatusContents();
	test1.schedule_CT();
	test1.showStatusContents();
	test1.addAnnotationCT();
	test1.openCT();


	test2.showStatusContents();
	test2.schedule_US();
	test2.showStatusContents();
	test2.addAnnotationUS();
	test2.openUS();


	test3.showStatusContents();
	test3.schedule_MR();
	test3.showStatusContents();
	test3.addAnnotationMR();
	test3.openMR();

	return 0;
}

