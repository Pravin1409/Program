/*
Write the program accept number from user and count Frequency of 4 in it.
*/

#include<stdio.h>
int CountFour(int ino)
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
        if (iDigit==4)
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

    iRet=CountFour(ivalue);
    printf("Frequency of 4 is=%d",iRet);

     return 0;
}