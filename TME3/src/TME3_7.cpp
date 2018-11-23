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

using namespace std;
using namespace tme3_6;

namespace tme3_7{

class Banque{
		vector<Compte> comptes;
		int initial;



		public:
			Banque(int ncomptes, int si) : comptes(ncomptes,Compte(si)),initial(si){}; //initialisation ncomptes avec comme somme si

			size_t size() const{
				return comptes.size();

			}

			bool transfert(int idD,int idC,int val){
				bool b = false;

				Compte& deb = comptes[idD];
				Compte& cred = comptes[idC];

				if((b = deb.debiter(val))){
					cred.crediter(val);
				}


				return b;
			}

			/*Compte & operator[](const Banque & other, int i){

						return comptes.operator []();
					}*/

};


void work(int id, Banque& b){
	int deb=0, cred=0, m=0;
	cout << "Started"<< id<<endl;
	for(int i=0; i<1000; i++){
	do{
		deb = rand()%b.size();
		cred = rand()%b.size();
	}while(deb==cred);

	m = rand()%100;

	b.transfert(deb,cred,m);
	this_thread::sleep_for(chrono::milliseconds(rand()%20));
	}
			cout << "Finished"<< id << endl;
}
void createAndWait(int N){
	Banque b(100,20000);

		//Threads
		vector<thread> threads;
				threads.reserve(N);

				for(int i=0; i<N;++i){
					threads.emplace_back(work,i, ref(b));
				}


				for(int i=0; i<N;++i){
							threads[i].join();
				}


}


};

//main

using namespace tme3_7;

/*int main(){

 std::srand(time(nullptr));
 tme3_7::createAndWait(10);

return 0;
}*/





