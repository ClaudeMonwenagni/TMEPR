/*
 * TME4_8.h
 *
 *  Created on: 17 oct. 2018
 *      Author: 3872380
 */

#ifndef TME4_8_H_
#define TME4_8_H_


#include <string> //size_t
#include <mutex>
#include <condition_variable>
#include <iostream>

using namespace std;

class Job{

	public:
		virtual void run() = 0;
		virtual ~Job(){};
};


#endif /* TME4_8_H_ */
