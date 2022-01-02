#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd=0,iRet=0;
    char Fname[20];
    
    printf("Enter file name:");
    scanf("%s",Fname);
    fd=open(Fname,O_RDWR);
    
    iRet=lseek(fd,0,2);
    printf("size of file is:%d bytes",iRet);
    close(fd);
    return 0;
}