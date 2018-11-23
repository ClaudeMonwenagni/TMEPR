/*
 * TME4_9.h
 *
 *  Created on: 17 oct. 2018
 *      Author: 3872380
 */

#ifndef TME4_9_H_
#define TME4_9_H_

#include <string> //size_t
#include <mutex>
#include <condition_variable>
#include <chrono>
#include <thread>
#include "TME4_8.h"
#include <iostream>

using namespace std;

namespace ps{
class MonJob: public Job{

	int arg;
	int *ret;

	int foo(int arg){


		 	/*auto start = std::chrono::high_resolution_clock::now();
		    std::this_thread::sleep_for(1s);
		    auto end = std::chrono::high_resolution_clock::now();
		    std::chrono::duration<double, std::milli> elapsed = end-start;*/
		std::this_thread::sleep_for(1s);
			return arg%256;
	}

	public:
		MonJob(int arg):arg(arg),ret(ret){};
		~MonJob(){}

		void run(){
			cout<<"debut sur arg = " <<arg<<endl;
			*ret=foo(arg);
			cout<<"res = "<<*ret<<endl;
		}
};

};

#endif /* TME4_9_H_ */
