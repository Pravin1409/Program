#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int CountDigit(char Fname[])
{
    int i=0,fd=0,icnt=0,iRet=0;
    char Buffer[1024];
    fd=open(Fname,O_RDWR);
    if (fd==-1)
    {
        printf("unable to open file");
        return -1;
    }
    while ((iRet=read(fd,Buffer,sizeof(Buffer)))!=0)

    {
        for(i=0;i<iRet;i++)
        {
            if(Buffer[i]>='0'&&Buffer[i]<='9')
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
    printf("Emter file name:");
    scanf("%s",Fname);

    iRet=CountDigit(Fname);
    printf("Count Are:%d",iRet);
    return 0;
}