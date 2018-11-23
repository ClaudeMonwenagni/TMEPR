/*
 * TME61.cpp
 *Tube nommé : Programme Reader
 *
 *  Created on: 20 nov. 2018
 *      Author: claude
 */

#include <unistd.h>
#include <sys/types.h>
#include <iostream>
#include <sys/stat.h>
#include <fcntl.h>
#include <string>
#include <csignal>

/*
using namespace std;
int main(int argc,char**argv){

	if(argc<2)
	{
		cerr<<"give a pipe name"<<endl;
	}

	int fd = open(argv[1],O_RDONLY);
	if(fd<0)
	{
		perror("open error");
		return 1;
	}

	while(true){
		size_t sz;

		int rd =read(fd,&sz,sizeof(sz));
		if(rd==0){
			break;
		}
		else if(rd!=sizeof(sz))
		{
			perror("read error");
			return 1;
		}

		char buff[sz];
		rd=read(fd,&buff,sz);

		if(rd==0){
			break;
		}
		else if(rd!=sz){
			perror("read error");
			return 1;
		}
		cout<<buff<<endl;
	}
	close(fd);

	return 0;
}
*/
