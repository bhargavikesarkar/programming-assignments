#include <stdio.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
    FILE* fp1,*fp2;
    char ch;

    fp1=fopen(argv[1],"r");
    fp2=fopen(argv[2],"w");

    if(fp1==NULL || fp2==NULL)
    {
        printf("error in opening files");
        return 1;
    }

    while((ch=fgetc(fp1))!=EOF)
    {
        fputc(ch,fp2);
    }
    remove(argv[1]);

    fclose(fp1);
    fclose(fp2);
    return 0;
}