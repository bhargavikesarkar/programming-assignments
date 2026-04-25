#include<stdio.h>
#include<string.h>

int main(int argc , char *argv[])
{
    FILE *fp;
    char line[1000];
    int line_no=0;

    fp= fopen(argv[1], "r");

    if(fp==NULL)
    {
        printf("file cant be opened!");
        return 1;
    }

    while(fgets(line , 1000, fp)!=NULL)
    {
        line_no++;

        if(strstr(line,argv[2])!=NULL)
        {
            printf("line-%s \nfound on line %d\n",line,line_no);
        }
    }
    fclose(fp);
    return 0;
}