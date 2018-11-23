/*
 * TME4_10.h
 *
 *  Created on: 17 oct. 2018
 *      Author: 3872380
 */

#ifndef TME4_10_H_
#define TME4_10_H_
#include"TME4_6.h"
#include <thread>
#include <vector>

namespace pr{



void worker(Queue<Job> *queue){
	while(true){
		Job*j=queue->pop();
		j->run();
		delete(j);
	}
}


class Pool{

	Queue<Job> queue;
	vector<thread> threads;

	public:
		Pool(int qs): queue(qs){}

		void start(int nbt){
			threads.reserve(nbt);

			for(int i =0; i<nbt; ++i){
				threads.emplace_back(worker,&queue);
			}
		}

		void submit(Job*job){
			queue.push(job);
		}
};





};




#endif /* TME4_10_H_ */
