/*
 * TME5_4.cpp
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

	int i=0;

	cout << "mainpid : " << getpid() << endl;

	for(; i<N; ++i)
	{
		if(fork()==0){
			cout << "fils : " << i << " pid : " <<getpid() <<" ppid : "<< getppid() <<endl;
			return i;
		}
		else
		{
			break;
		}
	}

	if(i!=N)
	{
		int statut;
		pid_t pid = wait(&statut);
		cout << "Detection fin fils : "<< i <<" de pid : "<< pid << endl;
	}
	return 0;
}
*/






