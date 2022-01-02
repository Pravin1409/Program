#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd=0;
    char Arr[]="Hello";
    fd=open("LB17.txt",O_RDWR);
    if (fd==-1)
    {
        printf("unable open.\n");
        return -1;
    }
    
    write(fd,Arr,5);
    close(fd);
    return 0;
}