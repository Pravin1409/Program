#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int CountSpace(char Fname[])
{
    int fd=0,i=0,icnt=0,iRet=0;
    char Buffer[1024];
    fd=open(Fname,O_RDWR);
    if(fd==-1)
    {
        printf("unable to open");
        return -1;
    }
    while((iRet = read(fd ,Buffer ,sizeof(Buffer)))!=0)
    {
        for(i=0;i<iRet;i++)
        {
            if(Buffer[i]==' ')
            {
                icnt++;
            }
        }
        return icnt;
    }
}
int main()
{
    int iRet=0;
    char Fname[20];

    printf("Enter file name:");
    scanf("%s",Fname);

    iRet=CountSpace(Fname);
    printf("count Are:%d",iRet);

    return 0;
}