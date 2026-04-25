#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>    //- not supported on windows
#include <stdlib.h>

int main()
{
    int arr[5]={3,8,6,17,90};
    int pid=fork();

    if(pid==0)
    {
        printf("running child proc");
        printf("sqaures-\n");
        for(int i=0;i<5;i++)
        {
            printf("%d\n",(arr[i]*arr[i]));
        }

        exit(0);
    }
    else if(pid>0)
    {
        wait(NULL);
        printf("child exited");
        printf("running parent pro");
        printf("cubes-\n");
        for(int i=0;i<5;i++)
        {
            printf("%d\n",(arr[i]*arr[i]*arr[i]));
        }
    }
    else{
        printf("error");
    }
    return 0;
}