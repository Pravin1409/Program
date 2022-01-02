/*
Write a program which accept number from user and  count frequency of such digit is less than 6
*/
#include<stdio.h>
int Count(int ino)
{
    if (ino<0)
    {
        ino=-ino;
    }
    
    int iDigit=0;
    int icnt=0;
    while (ino>0)
    {
        iDigit=ino%10;
        if (iDigit<6)
        {
            icnt++;
        }
        ino=ino/10;
        
    }
    return icnt;
}
int main()
{
    int ivalue=0;
    int iRet=0;

    printf("enter the number=");
    scanf("%d",&ivalue);
    
    iRet=Count(ivalue);
    printf("Frequency of digit less than 6 is : %d",iRet);
     return 0;
}