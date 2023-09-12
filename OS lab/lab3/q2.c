#include<sys/types.h>
#include<stio.h>
#include<unistd.h>
#include<sys/wait>
#include<stdlib.h>
int main ()
{
	int status;
	pid_t pid = fork() ;
	switch(pid)
	{
	case 0 :
		execlp("./q1","q1",NULL);
		break;
	case -1 :
		printf("error\n") ;
		break ;
	case 1 :
		wait(NULL) ;
		printf("child completerd");
		break;
	}
}