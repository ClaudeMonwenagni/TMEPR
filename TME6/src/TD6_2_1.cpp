/*
 * TME61.cpp
 *
 *  Created on: 20 nov. 2018
 *      Author: claude
 */



#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <iostream>

using namespace std;
/*int main(){
	pid_t P, F1, F2;

	P =getpid();

	int pdesc[2];

	if(pipe(pdesc)!=0){ //pipe
		perror("pipe error");
		return 1;
	}

	F1 = fork();
	if(F1<0)
	{
		perror("fork error");
		return 1;
	}
	else if(F1==0)
	{
		close(pdesc[1]);
		F1=getpid();

		if(read(pdesc[0],&F2,sizeof(pid_t))==sizeof(pid_t)){
			cout<<"je suis "<<getpid()<<" P = "<<P<<" F1 = "<<F1<<" F2 = "<<F2<<endl;
		}
		else
		{
			perror("read error");
			return 1;
		}
		close(pdesc[0]);
		return 0;
	}
	//=====
	F2 =fork();
	if(F2<0)
		{
			perror("fork error");
			return 1;
		}
		else if(F2==0)
		{
			close(pdesc[0]);
			F2=getpid();

			if(write(pdesc[1],&F2,sizeof(pid_t))==sizeof(pid_t)){
				cout<<"je suis "<<getpid()<<" P = "<<P<<" F1 = "<<F1<<" F2 = "<<F2<<endl;
			}
			else
			{
				perror("write error");
				return 1;
			}
			close(pdesc[1]);
			return 0;
		}

	//Père
	close(pdesc[0]);
	close(pdesc[1]);
	cout<<"je suis "<<getpid()<<" P = "<<P<<" F1 = "<<F1<<" F2 = "<<F2<<endl;
	wait(nullptr);
	wait(nullptr);

	return 0;
}
*/
