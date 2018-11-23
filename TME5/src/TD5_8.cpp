/*
 * TME5_8.cpp
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

	int M = 4;
	pid_t main_pid = getpid();

	cout << "mainpid : " << main_pid << endl;

	sigset_t setneg;
	sigfillset(&setneg); //Mets tous les bits à 1
	sigdelset(&setneg,SIGINT); //On met SIGINT à 0

	signal(SIGINT,[](int sig){
		cout << "processus : " << getpid()<< " reçoit le signal : "<< sig<< endl;
	}); //handler

	//sigprocmask
	sigset_t setpos;
	sigemptyset(&setpos);
	sigaddset(&setpos,SIGINT);
	sigprocmask(SIG_BLOCK,&setpos,nullptr);

	pid_t pid =fork();
	if(pid == 0)
	{
		cout<< "naissance fils" <<endl;
		for(int i=0; i<M; ++i)
		{
			sigsuspend(&setneg);
			cout <<" pid : " <<getpid() <<" Tour : "<< i<<endl;
			kill(main_pid,SIGINT);
		}
		cout<< "mort du fils" <<endl;
		return 0;
	}
	else
	{
		sleep(1);
		for(int i=0; i<M; ++i)
		{
			cout <<" pid : " <<getpid() <<" Tour : "<< i<<endl;
			kill(pid,SIGINT);
			sigsuspend(&setneg);
		}

		wait(nullptr);
		cout<< "mort du père"<<endl;
	}

	return 0;
}
*/







