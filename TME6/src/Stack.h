/*
 * Stack.h
 *
 *  Created on: 21 nov. 2018
 *      Author: claude
 */

#ifndef STACK_H_
#define STACK_H_

#include <sys/types.h>
#include <iostream>
#include <sys/stat.h>
#include <fcntl.h>
#include <semaphore.h>
#include <stdlib.h>
#include <stdio.h>
#define STACKSIZE 100

namespace pr{
template <typename T>
	class Stack{
	T tab[STACKSIZE];
		size_t sz;
		//Ajout
		sem_t mutex;
		sem_t sempush;
		sem_t sempop;

		public:
			Stack():sz(0){
				sem_init(&mutex,1,1);
				sem_init(&sempush,1,STACKSIZE);
				sem_init(&sempop,1,0);

			}

			~Stack(){
				sem_destroy(&mutex);
				sem_destroy(&sempush);
				sem_destroy(&sempop);
			}

			T pop(){

				sem_wait(&sempop);
				sem_wait(&mutex);
				T toret = tab[--sz];
				sem_post(&mutex);
				sem_post(&sempush);
				return toret;
			}

			void push(T elt){

				sem_wait(&sempush);
				sem_wait(&mutex);
				tab[sz++]=elt;
				sem_post(&mutex);
				sem_post(&sempop);

			}

	};
}


#endif /* STACK_H_ */
