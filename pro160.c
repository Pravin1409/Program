/*
Accept file name from user open file and write;
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
    int fd=0,iRet=0;
    char Fname[30];
    char Data[] = "Marvellous Infosystems";
    printf("Enter file name: ");
    scanf("%s",Fname);
    fd=open(Fname,O_RDWR);
    if(fd==-1)
    {
        printf("unable to open file\n");
        return-1;
    }
    else
    {
        printf("succesfully open file FD:%d\n",fd);
    }
    iRet=write(fd,Data,10);
    printf("%d bytes gets succesfully written in file \n ",iRet);
}