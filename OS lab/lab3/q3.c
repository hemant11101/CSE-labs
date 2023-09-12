#include<sys/types.h>
#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdlib.h>
int main ()
{
	int status;
	pid_t pidc = getpid();
	pid_t pidp = getppid() ;
	pid_t pid = fork() ;
	switch(pid)
	{
	case 0 : //child process 
		pidc = getpid();
		pidp = getppid() ;
		printf("child id : %d \n parent id : %d\n",pidc,pidp) ;
		break;
	case -1 :
		printf("error\n") ;
		break ;
	case 1 :
		pidc = getpid() ;
		pidp = getppid() ;
		printf("child id : %d \n parent id : %d\n",pidc,pidp) ;
		wait(NULL) ;
		//printf("child completerd");
		break;
	}
}