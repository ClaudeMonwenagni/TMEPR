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
#include "TME3_6.cpp"
#include "TME3_7.cpp"

using namespace std;
using namespace tme3_7;
using namespace tme3_6;



namespace tme3_8{

class Compte{

		int solde;
		mutable recursive_mutex m;

		public:


			void crediter(unsigned int val){
				lock_guard<recursive_mutex> lg(m);
				solde+=val;

			}

			int getSolde() const{
				lock_guard<recursive_mutex> lg(m);
				return solde;
			}

			bool debiter(unsigned int val){
				lock_guard<recursive_mutex> lg(m);
				bool go = solde >=val;

				if(go){
					solde -=val;
				}

				return go;
			}


			void lock() const{
				m.lock();

			}


			void unlock() const{
				m.unlock();
			}


			bool try_lock() const{
				return m.try_lock();
			}

			Compte(const Compte& other){
							other.lock();
							solde=other.solde;
							other.unlock();
						}



};


/*void transfert(int idD,int idC,unsigned int val, Banque comptes){

	Compte& deb(comptes[idD]);
	Compte& cred(comptes[idC]);

	if((b = deb.debiter(val))){
		cred.crediter(val);
	}
}*/


};

//main



/*int main(){

	Compte c(16090);
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
}

return 0;
}*/





