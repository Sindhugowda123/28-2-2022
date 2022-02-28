#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
printf("PID of exec.c= %d PPID of exec.c %d \n",getpid(),getppid());
char *args[]={"HELLO","TS",NULL};
execl("./a.out",args);
printf("Back to 1p.c\n");
return 0;
}
