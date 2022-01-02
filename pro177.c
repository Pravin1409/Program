#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int CountVOwel(char Fname[])
{
    int icnt=0,i=0,fd=0,iRet=0;
    char Buffer[1024];
    fd=open(Fname,O_RDWR);
    while ((iRet=read(fd,Buffer,sizeof(Buffer)))!=0)
    {
        for(i=0;i<iRet;i++)
        {
            if(Buffer[i]=='a'||(Buffer[i]=='e')||(Buffer[i]=='i')||(Buffer[i]=='o')||(Buffer[i]=='u'))
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

    iRet=CountVOwel(Fname);
    printf("Count Are:%d",iRet);
    return 0;
}