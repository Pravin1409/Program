#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
    int fd=0,iRet=0;

    char string[]="family";
   
    fd=open("Demo.txt",O_RDWR |O_APPEND);
    
    
        write(fd,string,sizeof(string));
    
    
}