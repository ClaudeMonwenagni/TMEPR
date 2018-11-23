/*
 * TME5_10.cpp
 *
 *  Created on: 24 oct. 2018
 *      Author: 3872380
 */

/*
 * TME5_9.cpp
 *
 *  Created on: 24 oct. 2018
 *      Author: 3872380
 */


#include <iostream>
#include <unistd.h>
#include <sys/wait.h>
#include <csignal>

using namespace std;

/*int main() {


	int N = 4, T=1;
	pid_t pids[N];

	cout << "main pid = "<< getpid()<<endl;

	for(int i =0; i<N; ++i){
		pid_t pid =fork();

		if(pid == 0){
			cout<<"fils : "<<i<<" de pid : "<<getpid()<<endl;
			signal(SIGINT,[](int sig){
				cout<<"signal : "<<sig<<" reçu, terminaison "<<endl;

				exit(0);
			}); //handler


			sigset_t setneg;
			sigfillset(&setneg);
			sigdelset(&setneg,SIGINT);
			sigsuspend(&setneg);
		}
		else
		{
			pids[i] = pid;
		}

	}




	signal(SIGINT,[](int sig){}); //handler

	sigset_t setal;
	sigfillset(&setal); //Mets tous les bits à 1
	sigdelset(&setal,SIGALRM); //On met SIGINT à 0

	alarm(T);
	sigsuspend(&setal);

	signal(SIGINT,SIG_IGN);
	kill(0,SIGINT);

	for(int i=0; i<N; ++i)
	{
		wait(nullptr);
	}

}*/



