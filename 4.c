#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
    int fd=0,iRet=0;
    char Fname[30];
    char Data[56];
    printf("Enter file name:");
    scanf("%s",Fname);
    fd=open(Fname,O_RDWR);
    if (fd==-1)
    {
        printf("unable open");
    }
    else 
    {
        printf("file size is:%d\n",fd);
    }
    iRet=read(fd,Data,56);
    printf("size of file is %d bytes",iRet);
   
}