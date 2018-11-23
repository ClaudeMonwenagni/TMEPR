//============================================================================
// Name        : TME3.cpp
// Author      : Claude MONWENAGNI
// Version     :
// Copyright   : Your copyright notice
// Description : Thread, Lock in C++, Ansi-style
//============================================================================

#include <iostream>
#include <thread>
#include <cstdlib>
#include <vector>
#include<chrono>
#include<ctime>


using namespace std;

namespace td3{

	void work(int id){
		cout << "Started"<< id<<endl;
		auto r = std::rand()%1000;
		this_thread::sleep_for(chrono::milliseconds(r));

		cout << "Finished"<< id << endl;
	}

	void createAndWait(int N){
		vector<thread> threads;
		threads.reserve(N);

		for(int i=0; i<N;++i){
			threads.emplace_back(thread(work,i)); //on peut aussi mettre threads.emplace_back(work,i) mais pour push_back on est obligée de mettre threads.emplace_back(thread(work,i))
		}

		for(int i=0; i<N;++i){
					threads[i].join();
		}
		/*ou bien
		 for(auto& t : th){
				t.join();
			} */
	}






};
/*

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	std::srand(time(nullptr));
	td3::createAndWait(10);
	return 0;
}*/
