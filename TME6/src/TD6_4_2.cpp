/*
 * TME61.cpp
 *	Sémaphore
 *
 *      Author: claude
 */
/*
#include <sys/types.h>
#include <iostream>
#include <sys/stat.h>
#include <fcntl.h>
#include <semaphore.h>
#include <stdlib.h>
#include <stdio.h>
#define N 4
using namespace std;

int main(int argc,char**argv){

	sem_t* mutex[N];

	for(int i=0; i<N;i++)
	{
		string smutexname = ("/monsem"+std::to_string(i));
		mutex[i]=sem_open(smutexname.c_str(),O_CREAT|O_EXCL|O_RDWR,0666,i==0);

		if(mutex[i]==SEM_FAILED)
		{
			perror("mutex error");
			exit(1);
		}

	}

	for(int i=0;i<N;i++)
	{
		pid_t f=fork();
		if(f==0)
		{
			for(int j=0;j<10;j++){
				sem_wait(mutex[j%N]);//[i]
				cout<<"ping"<<j<<endl;
				sem_post(mutex[(j+1)%N]);//[(i+1)%N]
			}
			return 0;
		}
	}

	for(int i=0;i<N;i++)
	{
		wait(nullptr);
	}
	for(int i=0;i<N;i++)
	{
		sem_unlink("/monsem",to_string(i));
	}


	return 0;
}*/
