#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int CountSmall(char Fname[])
{
    int fd=0,icnt=0,i=0,iRet=0;
    char Buffer[1024];
    fd=open(Fname,O_RDWR);

    while((iRet=read(fd,Buffer,sizeof(Buffer)))!=0)
    {
        for(i=0;i<iRet;i++)
        {
            if(Buffer[i]>='a'&&Buffer[i]<='z')
            {
                icnt++;
            }
        }
        return icnt;
    }
}
int main()
{
    char Fname[30];
    int iRet=0;
    printf("Enter file name:");
    scanf("%s",Fname);

    iRet=CountSmall(Fname);
    printf("Count of Capital are:%d",iRet);

    return 0;
}