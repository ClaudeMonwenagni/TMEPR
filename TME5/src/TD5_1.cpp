//============================================================================
// Name        : TME5.cpp
// Author      : Claude MONWENAGNI
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include <unistd.h>
#include <sys/wait.h>

using namespace std;

/*int main() {

	int N = 4;

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
		wait(nullptr);
	}
	return 0;
}*/
