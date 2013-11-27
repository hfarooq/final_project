/*
 * main.cpp
 *
 *  Created on: Nov 12, 2013
 *      Author: Hamza
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
/*
	const char *a = "formula-1-race";
	const char *b = ".jpg";

	char result[100];

	strcpy(result, a);
	strcat (result, b);

	cout << result;

	system(result);
*/

	CT test;
	cout << "Filename of image currently stored in system is \"formula-1-race\"" << endl;
	test.openCT();
/*
	test.showStatus();
	test.schedule_CT();
	test.showStatus();
*/


	return 0;
}

