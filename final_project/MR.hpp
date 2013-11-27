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
	char *saved_type;

public:
	MR();
	void addAnnotationMR();
	void openMR(char *filename);


};


#endif /* MR_HPP_ */
