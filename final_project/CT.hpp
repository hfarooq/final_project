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
#include "Images.hpp"

using namespace std;

class CT : public Images{
private:

public:
	CT();
	CT(string doctor, string person, string schedule);
};


#endif /* CT_HPP_ */
