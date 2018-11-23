/*
 * TME61.cpp
 *Tube nommé : Programme Writer
 *
 *  Created on: 20 nov. 2018
 *      Author: claude
 */
/*
#include <unistd.h>
#include <sys/types.h>
#include <iostream>
#include <sys/stat.h>
#include <fcntl.h>
#include <string>
#include <csignal>
#include <stdio.h>

char*path;

void handler(int sig){
	unlink(path);
	exit(0);
}

using namespace std;
int main(int argc,char**argv){

	if(argc<2)
	{
		cerr<<"give a pipe name"<<endl;
	}
	if(mkfifo(argv[1],S_IRUSR|S_IWUSR)!=0)
	{
		perror("mkfifo error");
		return 1;
	}
	path =argv[1];

	int fd = open(path,O_WRONLY);
	if(fd<0)
	{
		perror("open error");
		return 1;
	}

	signal(SIGINT,handler);
	while(true){
		std::string s;
		cin>>s;//std::cin.get(s);
		size_t sz=s.length()+1;
		if(sz>1)
		{
			write(fd,&sz,sizeof(sz));
			write(fd,s.c_str(),sz);
		}

	}


	return 0;
}
*/
