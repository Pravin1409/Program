/*
only read file ./using while loop
*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
    int fd=0,iRet=0;
    char Fname[30];
    char Buffer[6];

    printf("Enter file name:");
    scanf("%s",Fname);

    fd=open(Fname,O_RDONLY);
    if(fd==-1)
    {
        printf("unable open file.");
        return-1;
    }
    else
    {
        printf("Succesfully open file FD:%d\n",fd);
    }
    while ((iRet=read(fd,Buffer,sizeof(Buffer)))!=0)
    {
        write(1,Buffer,iRet);
    }
    close(fd);
    
    return 0;
}