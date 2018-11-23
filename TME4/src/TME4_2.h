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

template <typename T>
class Queue {

		T**tab;
		const size_t allocsize;
		size_t begin;
		size_t sz;

		public :
			Queue (size_t maxsize) :allocsize(maxsize),begin(0),sz(0) {

				tab = new T*[maxsize];
				memset(tab, 0, maxsize*sizeof(T*));
			}

			size_t size() const{
				return sz;
			}

			T*pop () {

				if(empty()){
					return nullptr;
				}

				auto ret = tab[begin];
				tab[begin] = nullptr;
				sz--;
				begin = (begin+1) % allocsize;

				return ret;
			}

			bool push (T*elt) {

				if(full()){
					return false;
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
