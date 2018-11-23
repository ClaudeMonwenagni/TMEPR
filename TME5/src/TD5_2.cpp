/*
 * TME5_2.cpp
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

	cout << "mainpid : " << getpid() << endl;

	for(int i=0; i<N; ++i)
	{
		if(fork()==0){
			cout << "fils : " << i << " pid : " <<getpid() <<" ppid : "<< getppid() <<endl;
			return i;
		}
	}

	for(int i=0; i<N; ++i)
	{
		pid_t pid = wait(&statut);
		cout << "pid fils : "<< pid <<"  statut : " << WEXITSTATUS(statut) <<endl;
	}
	return 0;
}
*/


