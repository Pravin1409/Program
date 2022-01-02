/*
write a program accept number from user and return the count of even Digit.
*/
#include<stdio.h>
 int CountEven(int ino)
 {
    ///////////////////////////////////////////////////
    if (ino<=0)
    {
     ino=-ino;        // UPDATOR
    }
    ///////////////////////////////////////////////////
    int iDigit=0;
    int icnt=0;

    while (ino>0)
  {  
    iDigit=ino%10;
    if (iDigit%2==0)
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
    printf("enter the numbr=");
    scanf(" %d",&ivalue);

    iRet=CountEven(ivalue);
    printf(" The even count are:%d",iRet);
     return 0;
}