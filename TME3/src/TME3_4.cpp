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

namespace tme3_4{

class Compte{

		atomic<int> solde;

		public:
			Compte(unsigned int solde=0) : solde(solde){};
			void crediter(unsigned int val){
				solde+=val;
			}

			int getSolde() const{
				return solde;
			}

			bool debiter(unsigned int val){

				bool go = (solde >=val);

				if(go){
					solde -=val;


				}

				return go;
			}



};

void jackpot(Compte& c){

	for(int i=0; i<10000;++i){
		c.crediter(1);
	}
}

int LosePot(Compte& c){
	int debit = 0;
			for(int i=0; 10*i<10000;i++){
					if(c.debiter(10)){
						debit++;
					}
				}
			return debit;
}


void work(int id, Compte& c){
	int debit;
		cout << "Started"<< id<<endl;
		debit =LosePot(c);
		cout << "Finished"<< id << " : "<<debit<< endl;
	}

	void createAndWait(int N){
		vector<thread> threads;
		threads.reserve(N);
		Compte c;
		c.crediter(15000);
		for(int i=0; i<N;++i){
			threads.emplace_back(thread(work,i,ref(c))); //on peut aussi mettre threads.emplace_back(work,i) mais pour push_back on est obligée de mettre threads.emplace_back(thread(work,i))
		}

		for(int i=0; i<N;++i){
					threads[i].join();
					cout << "joined"<< i << endl;
		}

		if(c.getSolde() < 0){
			cout << "Négatif "<< c.getSolde()<<endl;
		}else{
			cout << "Compte vide " << c.getSolde()<< endl;
		}



	}


};

//main

/*using namespace tme3_4;
int main(){


	std::srand(time(nullptr));
	createAndWait(10);
return 0;
}*/





