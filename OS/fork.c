#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>- not supported on windows

int main()
{
    int pid=fork();

    if(pid==0)
    {
        printf("running child proc");
        printf("pid=%d",getpid());
        printf("parent pid=%d",getppid());
        exit(0);
    }
    else if(pid>0)
    {
        wait(NULL);
        printf("child exited");
        printf("running parent pro");
        printf("pid=%d",getpid());
        printf("parent pid=%d",getppid());
    }
    else{
        printf("error");
    }
    return 0;
}