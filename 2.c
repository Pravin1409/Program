/*
Write a program accept number from user and count of odd Digit.
*/

#include<stdio.h>
int CountOdd(int ino)
{     /////////////////////////////////////////
      if (ino<0)
     {
      ino=-ino; // UPDATOR
     }
     //////////////////////////////////////////
      int iDigit=0;
      int icnt=0;

  while (ino>0)
  {
      iDigit=ino%10;
      if (iDigit%2!=0)
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
    printf("enter the number:\n");
    scanf("%d",&ivalue);

    iRet= CountOdd(ivalue);
    printf("the count of odd nunber=%d",iRet);
     return 0;
}