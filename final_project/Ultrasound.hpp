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
	char *saved_type;

public:
	Ultrasound();
	void addAnnotationUS();
	void openUS();
	void openUS(char *filename);
};


#endif /* ULTRASOUND_HPP_ */
