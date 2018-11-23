/*
 *	Mémoire partagé
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



	size_t shmsize= sizeof(Stack<char>);
	int fd;

	void *addr;
	bool anonymous=false;
	if(anonymous){
		addr = mmap(nullptr,shmsize,PROT_READ|PROT_WRITE,|MAP_SHARED|MAP_ANONYMOUS,-1,0);
		if(addr==MAP_FAILED)
		{
			perror("addr error");
			exit(1);
		}
		else
		{
			fd=shm_open("/myshym",O_CREAT|O_EXCL,O_RDWR,0666);
			perror("fd");
			if(ftruncake(fd,shmsize)!=0){
				perror("ftruncake error");
				return 1;
			}
			addr = mmap(nullptr,shmsize,PROT_READ|PROT_WRITE,|MAP_SHARED,fd,0);
			perror("addr error");
			exit(1);
		}
	}

	Stack<char> *s=new(addr) Stack<char>(); //+on vire delete s

	//=====

	//==A la fin on aura
	s->~Stack();//(sans delete)
	if(munmap(addr,shmsize)!=0){
		perror("munmap error");
					exit(1);
	}

	if(!anonymous){
		if(shm_unlink("/myshm")!=0){
			perror("shm_unlink error");
						exit(1);
		}
	}

	return 0;
}
*/
