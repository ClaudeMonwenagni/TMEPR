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

/*int main() {

	int N = 4;
	int statut;
	pid_t pids[N], pid;

	cout << "mainpid : " << getpid() << endl;

	for(int i=0; i<N; ++i)
	{
		pid =fork();
		if(pid==0){
			cout << "fils : " << i << " pid : " <<getpid() <<" ppid : "<< getppid() <<endl;
			return i;
		}
		else{
				pids[i] = pid;
		}
	}

	for(int i=0; i<N; ++i)
	{
		pid_t pid = waitpid(pids[i],&statut,0);
		cout << "pid fils : "<< pid <<"  statut : " << WEXITSTATUS(statut) <<endl;
	}
	return 0;
}*/



