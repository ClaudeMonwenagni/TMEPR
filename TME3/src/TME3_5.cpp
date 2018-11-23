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
#include <mutex>

using namespace std;

/*namespace tme3_5{

class Compte{

		int solde;
		mutable mutex m;

		public:
			Compte(unsigned int solde) : solde(solde){};

			void crediter(unsigned int val){
				m.lock();
				solde+=val;
				m.unlock();
			}

			int getSolde() const{
				m.lock();
				int res = solde;
				m.unlock();
				return res;
			}

			bool debiter(unsigned int val){
				m.lock();
				bool go = (solde >=val);

				if(go){
					solde -=val;
				}
				m.unlock();

				return go;
			}



};

void jackpot(Compte& c){

	for(int i=0; i<10000;++i){
		c.crediter(1);
	}
}

void LosePot(Compte& c){
	int debits = 0;

	while(debits*10 < 1000){
		c.debiter(10);
		++debits;
	}
	}

};*/

//main

//using namespace tme3_5;
/*int main(){

	Compte c(10000);
	int N =10;

	//Threads
	vector<thread> threads;
			threads.reserve(N);

			for(int i=0; i<N;++i){
				threads.emplace_back(LosePot,std::ref(c));
			}

			for(int i=0; i<N;++i){
						threads[i].join();
			}
	//Fin Threads

			if(c.getSolde() != 0){
				cout << "Vous avez de l'argent"<< endl;
			}
			else{
				cout << "Vous compte est vide"<< endl;
			}


return 0;
}*/





