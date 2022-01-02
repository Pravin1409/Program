/*
write a program which accept number from user and return the count of digits in between 3and7.
*/
#include<stdio.h>
int CountBetween(int ino)
{   ////////////////////////////////////////////////
    if (ino<0)
    {
        ino=-ino;      // UPDATOR
    }
    ////////////////////////////////////////////////

    
    int iDigit=0;
    int icnt=0;
    while (ino>0)
    {
        iDigit=ino%10;
        if (iDigit>3&&iDigit<7)
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
    printf("enteer the number :\n");
    scanf("%d",&ivalue);

    iRet=CountBetween(ivalue);
    printf("the Count between 3 and 7 are:\n%d",iRet);

     return 0;
}