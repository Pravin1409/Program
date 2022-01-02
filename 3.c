#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd=0,iRet=0;
    char Fname[30];
    char Buffer[1024];

    printf("Enter file name:");
    scanf("%s",Fname);
    fd=open(Fname,O_RDONLY);
    printf("Data is:");
    while ((iRet=read(fd,Buffer,sizeof(Buffer)))!=0)
    {
        write(1,Buffer,iRet);
    }
    close(fd);
}