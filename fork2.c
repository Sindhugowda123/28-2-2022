#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>

#include<stdlib.h>

int main()
{
pid_t pid;
printf("the fork starts from here\n");
pid=fork();
switch(pid)
{

case -1:
       printf("fork failed\n");
       exit(1);

case 0:
printf("the child pid %d the ppid %d\n",getpid(),getppid());
break;

default:
printf("the parent pid %d the ppid %d\n",getpid(),getppid());
break;
wait();
return 0;
}
}
