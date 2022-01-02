/*
Write  a program which accept distance and convert it into meter.
*/
#include<stdio.h>
int KMtoMeter(int ino)
{
    if (ino<0)
    {
        ino=-ino;
    }
    // if (ino==0)
    // {
    //     printf("you enter 0");
    // }
    
    int meter=1000;
    int icnt=0;
    int KM=0;

    for(icnt=0;icnt<=ino;icnt++)
    {
      KM=meter*ino;

    }
return KM;

}
int main()
{
    int ivalue=0;
    int iRet=0;

    printf("Enter Distance:");
    scanf("%d",&ivalue);

    iRet=KMtoMeter(ivalue);
    printf("%d meter",iRet);


    return 0;
}