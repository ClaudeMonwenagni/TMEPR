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

/*namespace test{

class Compte{

		int solde;
		mutable mutex mtx;
		public:
			Compte(int solde=0) : solde(solde){};

			void crediter(unsigned int val){

				solde+=val;
			}

			int getSolde() const{
				return solde;
			}

			bool debiter(int val){
				mtx.lock();
				if(getSolde()>=val){
					solde-=val;
					return true;
				}
				else return false;
				mtx.unlock();
			}
};

void jackpot(Compte& c){

	for(int i=0; i<10000;++i){
		c.crediter(1);
	}
}

void LosePot(Compte& c){

	for(int i=0; i<10000;++i){
		c.debiter(10);
	}
}


void work(int id, Compte& c){
		cout << "Started"<< id<<endl;
		for(int i=0; i<10000;i++){
				c.crediter(1);
			}

		cout << "Finished"<< id << endl;
	}

	void createAndWait(int N){
		vector<thread> threads;
		threads.reserve(N);
		Compte c;
		c.crediter(15000);
		for(int i=0; i<N;++i){
			threads.emplace_back(thread(LosePot,ref(c))); //on peut aussi mettre threads.emplace_back(work,i) mais pour push_back on est obligée de mettre threads.emplace_back(thread(work,i))
		}

		for(int i=0; i<N;++i){
					threads[i].join();
					cout << "joined"<< i << endl;
		}

		//if(c.getSolde() == 1000*10){
			cout << "Pas marcher "<< c.getSolde()<<endl;
		}else{
			cout << "Marche " << c.getSolde()<< endl;
		}
		cout << "Marche " << c.getSolde()<< endl;


	}

};

//main

using namespace test;
int main(){

	std::srand(time(nullptr));
	test::createAndWait(10);
return 0;
}*/





