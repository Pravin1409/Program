#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int CountCapital(char Fname[])
{
    int fd=0,iRet=0,i=0,icnt=0;
    char Buffer[1024];
    fd=open(Fname,O_RDWR);
    if ((fd==-1))
    {
        printf("unable open file");
        return -1;
    }
    while ((iRet=read(fd,Buffer,sizeof(Buffer)))!=0)
    {
        for(i=0;i<iRet;i++)
        {
            if ((Buffer[i]>='A')&&(Buffer[i]<='Z'))
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
    printf("Enter file name:");
    scanf("%s",Fname);

    iRet=CountCapital(Fname);
    printf("Count Are:%d",iRet);
    return 0;
}