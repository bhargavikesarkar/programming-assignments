#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc , char *argv[])
{
    printf("procc 1");
    printf("this is before exec");

    char *args[]={argv[1],NULL};
    execv(argv[1],args);

    printf("prog after exec");
    return 0;
}