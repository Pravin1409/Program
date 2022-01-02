#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int Count(char Fname[],char ch)
{
    int fd=0,iRet=0,i=0,icnt=0;
    char Buffer[1024];
    fd=open(Fname,O_RDWR);
    while ((iRet=read(fd,Buffer,sizeof(Buffer)))!=0)
    {
        for(i=0;i<iRet;i++)
        {
            if(Buffer[i]==ch)
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
    char ch;
    printf("Enter file name:");
    scanf("%s",Fname);
    printf("Enter character:");
    scanf(" %c",&ch);

    iRet=Count(Fname,ch);
    printf("Count Are:%d",iRet);
    return 0;
}
