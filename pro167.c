/*
Accept file name from user and open,read(while loop),and copy another into another file.
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fdsrc=0,fddest=0,iRet=0;
    char Fname1[50];
    char Fname2[50];
    char Buffer[1024];

    printf("Enter Source file name:");
    scanf("%s",Fname1);

    fdsrc=open(Fname1,O_RDONLY);
    if(fdsrc==-1)
    {
        printf("unabele open file.");
        return -1;
    }
    else
    {
        printf("open Succesfully file FD:%d\n",fdsrc);
    }

    printf("enter dest file name:");
    scanf("%s",Fname2);

    fddest=creat(Fname2,0777);

    while ((iRet=read(fdsrc,Buffer,sizeof(Buffer)))!=0)
    {
        write(fddest,Buffer,iRet);
    }
    close(fdsrc);
    close(fddest);
    return 0;
}