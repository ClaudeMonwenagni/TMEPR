#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <iostream>

using namespace std;
int main(int argc, char**argv){

	char*arg1="";

	for(int i=0;i<argc;i++)
	{
		do{
			*arg1 += (char)argv[i];
		}while(argv[i]!='|');
	}

	cout<<*arg1<<endl;
	return 0;
}

