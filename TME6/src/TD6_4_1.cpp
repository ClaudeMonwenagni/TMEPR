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

using namespace std;

int main(int argc,char**argv){

	sem_t smutex1 = sem_open("/monsem1",O_CREAT|O_EXCL|O_RDWR,0666,0); //création du mutex 1

	if(smutex1==SEM_FAILED)
	{
		perror("open sem1 error");
		return 1;
	}

	sem_t smutex2 = sem_open("/monsem2",O_CREAT|O_EXCL|O_RDWR,0666,0); //création du mutex 2


	if(smutex2==SEM_FAILED)
	{
		perror("open sem2 error");
		return 1;
	}

	pid_t f=fork();
	if(f==0)
	{
			for(int i=0; i<10;i++)
			{
				sem_wait(smutex1);
				cout<<"ping"<<endl;
				sem_post(smutex2);
			}
			sem_close(smutex1);
			sem_close(smutex2);

	}
	else
	{
		for(int i=0; i<10;i++)
		{
			sem_post(smutex1);
			sem_wait(smutex2);
			cout<<"pong"<<endl;
		}
		sem_close(smutex1);
		sem_close(smutex2);
		sem_unlink("/monsem1");
		sem_unlink("/monsem2");
		wait(nullptr);
	}
	return 0;
}
*/
