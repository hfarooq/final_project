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

	Ultrasound test;
/*
	test.showStatus();
	test.schedule_CT();
	test.showStatus();
*/

	test.addAnnotationUS();

/*
	string myString;

	cout << "Type in your message now: " << endl;

	getline(cin, myString);

	cout << "You typed: " << myString << endl;
*/
	return 0;
}

