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

using namespace std;

int main(void){
	cout << "This is just an empty shell!" << endl;

	const char *a = "formula-1-race";
	const char *b = ".jpg";

	char result[100];

	strcpy(result, a);
	strcat (result, b);

	cout << result;

	//cout << *c << endl;

	system(result);

	return 0;
}

