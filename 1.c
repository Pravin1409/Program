#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int CountCapital(char Fname[])
{
    int fd=0,icnt=0,iret=0;
    char Buffer[1024];
    fd=open(Fname,O_RDWR);
    while ((iret=read(fd,Buffer,sizeof(Buffer)))!=0)
    {
        for(int i=0;i<iret;i++)
        {
            if(Buffer[i]>='A'&&Buffer[i]<='Z')
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

    iRet=CountCapital(Fname);
    printf("Count are=%d",iRet);
}