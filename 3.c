#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int CountSpace(char Fname[])
{
    int fd=0,i=0,iRet=0,icnt=0;
    char Buffer[1024];
    fd=open(Fname,O_RDWR);
    while((iRet=read(fd,Buffer,sizeof(Buffer))))
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
    char Fname[30];
    printf("Enter the file name:");
    scanf("%s",Fname);
    iRet=CountSpace(Fname);
    printf("count of space is: %d",iRet);
    return 0;
}