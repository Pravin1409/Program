#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
    int fd=0;
    char Fname[30];
    printf("Enter name:-");
    scanf("%s",Fname);
    fd=open(Fname,O_RDWR);
    if(fd==-1)
    {
        printf("unable open\n");
    }
    else
    {
        printf("file succesfully open FD:%d",fd);
    }
    return 0;
}