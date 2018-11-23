/*
 * TME4_13.h
 *
 *  Created on: 17 oct. 2018
 *      Author: 3872380
 */


#ifndef TME4_13_H_
#define TME4_13_H_


#include <string> //size_t
#include <mutex>
#include <condition_variable>
#include <iostream>

using namespace std;

class Barrier{

		mutable mutex m;
		int cpt;
		int N;
		condition_variable cv;

		public:
			Barrier(int n):cpt(0),N(n){};

			void done(){
				unique_lock<mutex> ul(m);
				++cpt;

				if(cpt==N){
					cv.notify_all();
				}
			}

			void waitFor(){
				unique_lock<mutex> ul(m);
				while(cpt!=N){
					cv.wait(ul);
				}
			}


};


#endif /* TME4_13_H_ */

