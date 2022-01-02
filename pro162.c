/*
Acccept file name from user open and read data from the file.
*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
    int fd=0,iRet=0;
    char Fname[50];
    char Data[6];

    printf("Enter file name: ");
    scanf("%s",Fname);

    fd=open(Fname,O_RDWR);
    if (fd==-1)
    {
        printf("unable open file.");
    }
    else
    {
        printf("Succesfully open file FD:%d\n",fd);
    }

    iRet=read(fd,Data,6);
    write(1,Data,iRet);
    
    return 0;
}