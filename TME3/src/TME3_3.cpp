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
#include <chrono>
#include <atomic>

using namespace std;

namespace tme3_3{

class Compte{

		atomic<int> solde;

		public:
			Compte(int solde) : solde(solde){};

			void crediter(unsigned int val){
				solde+=val;
			}

			int getSolde() const{
				return solde;
			}

};

void jackpot(Compte& c){

	for(int i=0; i<10000;++i){
		c.crediter(1);
	}
}


};

//main

using namespace tme3_3;
/*int main(){

	Compte c(0);
	int N =10;

	//Threads
	vector<thread> threads;
				threads.reserve(N);

				for(int i=0; i<N;++i){
					threads.emplace_back(jackpot,std::ref(c));
					//threads.emplace_back(jackpot,std::ref(i));
				}

				for(auto& t: threads){
							t.join();
				}
		//Fin Threads
				cout << c.getSolde() << endl;

return 0;
}*/





