/*
write a program which accept number from user and return multiplication of all digits.
*/
#include<stdio.h>
int MulDigit(int ino)
{   //////////////////////////////////////////////
    if (ino<0)
    {
        ino=-ino;   // UPDATOR
    }
    /////////////////////////////////////////////
    
     int iDigit=0;
     int mul=1;
     while (ino>0)
     {
         iDigit=ino%10;
         mul=mul*iDigit;
         ino=ino/10;
     }
     return mul;
}
int main()
{
    int ivalue=0;
    int iRet=0;
    printf("Enter the number:\n");
    scanf("%d",&ivalue);

    iRet=MulDigit(ivalue);
    printf("The multiplecation are: %d",iRet);
     return 0;
}