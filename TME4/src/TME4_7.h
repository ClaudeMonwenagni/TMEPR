//============================================================================
// Name        : TME4.cpp
// Author      : Claude MONWENAGNI
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
 * Queue.h
 *
 *  Created on: 17 oct. 2018
 *      Author: 3872380
 */

#ifndef SRC_QUEUE_H_
#define SRC_QUEUE_H_

#include <string> //size_t
#include <mutex>
#include <condition_variable>
#include <iostream>

using namespace std;

template <typename T>
class Queue {

		T**tab;
		const size_t allocsize;
		size_t begin;
		size_t sz;

		mutable mutex m;
		condition_variable cv;

		public :
			Queue (size_t maxsize) :allocsize(maxsize),begin(0),sz(0) {

				tab = new T*[maxsize];
				memset(tab, 0, maxsize*sizeof(T*));
			}

			size_t size() const{
				lock_guard<mutex> lg(m);
				return sz;
			}

			T*pop () {

				unique_lock<mutex> ul(m);
				if(empty()){
					cv.wait(ul);
				}

				if(full()){
					cv.notify_one();
				}

				auto ret = tab[begin];
				tab[begin] = nullptr;
				sz--;
				begin = (begin+1) % allocsize;

				return ret;
			}

			bool push (T*elt) {
				unique_lock<mutex> ul(m);
				while(full()){
					cv.wait(ul);
				}

				if(empty()){
					cv.notify_one();
				}

				tab[(begin + sz)%allocsize] = elt;
				sz++;

				return true;
			}

			~Queue() {
				for(size_t i = 0; i < sz ; i++) {
					auto ind = (begin + i) % allocsize;
					delete tab[ind];
				}
			delete[] tab;
			}
			//les ajouts
			bool full() const {
				return sz == allocsize;
			}

			bool empty() const {
				return sz == 0;
			}

};

#endif /*SRC_QUEUE_H*/

