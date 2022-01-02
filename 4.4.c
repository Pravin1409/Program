/*
write  a program which accept number from user and return summation of its factor
*/

#include<stdio.h>
int SumNonFact(int ivalue)
{
    int  icnt=0;
    int sum=0;
    for(icnt=1;icnt<=ivalue/2;icnt++)
    {
        if ((ivalue%icnt)== 0)
        {
         sum=sum+icnt;
        }
    }
 return sum;
}

int main()
{
 int ino=0;
 int iRet=0;
 printf("enter the number ");
 scanf("%d",&ino);
 iRet=SumNonFact(ino);
 printf("%d",iRet);

    return 0;
}