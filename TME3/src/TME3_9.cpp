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
#include "TME3_8.cpp"

using namespace std;
using namespace tme3_8;

namespace tme3_9{

class Banque{

		vector<Compte> comptes;
		int initial;

		public:
			Banque(int ncomptes, int si) : comptes(ncomptes,Compte(si)),initial(si){};

			size_t size() const{
				return comptes.size();

			}

			bool transfert(int idD,int idC,int val){
				bool b = true;

				Compte& deb = comptes[idD];
				Compte& cred = comptes[idC];

				deb.lock();
				cred.lock();
				if(b = deb.debiter(val)){
					cred.debiter(val);
				}

				deb.unlock();
				cred.unlock();

				return b;
			}



};
};

//main

using namespace tme3_9;
int main(){

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
}





