#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int Sum(char Fname[])
{
    int fd=0,iSum=0,iRet=0;
    char Buffer[1024];

    fd=open(Fname,O_RDWR);
    while((iRet=read(fd,Buffer,sizeof(Buffer)))!=0)
    {
        iSum=iSum+iRet;
    }
    return iSum;
}
int main()
{
    int iRet=0;
    char Fname[20];

    printf("Eenter file name:");
    scanf("%s",Fname);

    iRet=Sum(Fname);
    printf("size of file is: %d bytes.",iRet);
    return 0;
}