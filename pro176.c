#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd=0,iRet=0,i=0,icnt=0;
    char Fname[30];
    char Buffer[10];
    printf("Enter file name:");
    scanf("%s",Fname);

    fd=open(Fname,O_RDWR);
    if(fd==-1)
    {
        printf("unable to open:");
        return -1;
    }
    while ((iRet=read(fd,Buffer,sizeof(Buffer)))!=0)
    {
        for(i=0;i<iRet;i++)
        {
            if(Buffer[i]=='a')
            {
                icnt++;
            }
        }
    }
    printf("total count are:%d",icnt);
    close(fd);

    return 0;
}