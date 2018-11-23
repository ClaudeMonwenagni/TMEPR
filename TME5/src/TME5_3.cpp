/*
 * TME5_3.cpp
 *
 *  Created on: 24 oct. 2018
 *      Author: 3872380
 */

#include <iostream>
#include <unistd.h>
#include <sys/wait.h>


using namespace std;

void attaque(pid_t adversaire){

	int vies = 3;
	signal(SIGINT,[](int sig){
		vies--;
		cout<< "points de vies restants"<< vies <<endl;
	});

	if(vies == 0){
		cout<< "processus terminé"<< vies <<endl;
		exit(1);
	}

	sleep(1);
}

void defense(){

	signal(SIGINT,SIG_IGN);
	sleep(1);
}

void combat(pid_t adversaire){

		while(true){
			defense();
			attaque(adversaire);
		}
}



int main () {

	const int N = 3;

	std::cout << "main pid =" << getpid() << std::endl;


	for(int i=1, j=N; i<=N && j==N && fork()==0 ; i++ ) {

		std::cout << " i:j " << i << ":" << j << std::endl;

		for(int k=1; k<=i && j==N ; k++)
		{
			if( fork() == 0) {

				j=0;

				std::cout << " k:j " << k << ":" << j << std::endl;

				}

		}

	}

	for(int i=0;i<N;i++){
		wait(nullptr);
	}

return 0;

}



