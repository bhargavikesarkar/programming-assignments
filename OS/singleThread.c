#include <stdio.h>
#include <pthread.h>

void* funct1(void* arg)
{
    char* tname= (char*) arg;

    printf("thread created-%s\n",tname);
    printf("thread function complete\n");
}
int main()
{
    pthread_t thread1;
    char* name= "firstThread";

    pthread_create(&thread1,NULL,funct1,(void*)name);

    //wait for thread1 before exiting(otherwise main exits too fast and the thread function never executes)
    pthread_join(thread1, NULL);
    printf("main complete\n");

    return 0;
}