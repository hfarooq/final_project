/*
 * Images.hpp
 *
 *  Created on: Nov 25, 2013
 *      Author: Hamza
 */

#ifndef IMAGES_HPP_
#define IMAGES_HPP_

#include <iostream>
#include <stdio.h>

using namespace std;

class Images{
private:
	string staff;
	string patient_name;
	string date;

public:
	Images();
	Images(string doctor, string person, string calender);
};



#endif /* IMAGES_HPP_ */
