/*
Write a c program which accept number from user and and return difference between summation of even digit and odd digit
*/
#include<stdio.h>
int CountDiff(int ino)
{
    int iDigit=0;
    int isum=0;
    int sum=0;
    int diff=0;
    while (ino>0)
    {
        ////////////////////////////////////////////////////
        if (ino<0)
        {
            ino=-ino;   //UPDATOR
        }
        //////////////////////////////////////////////////
    iDigit=ino%10;

        if (iDigit%2==0)
         {
            isum=isum+iDigit;
         }

        if (iDigit%2!=0)
        {
        sum=sum+iDigit;
        }

        ino=ino/10;

        diff=isum-sum;
    }
    return diff;
}
int main()
{
    int ivalue=0;
    int iRet=0;
    printf("Enter the number: ");
    scanf("%d",&ivalue);
    
    iRet=CountDiff(ivalue);
    printf("The difference are=%d",iRet);
     return 0;
}