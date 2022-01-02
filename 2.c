#include<stdio.h>
int Sum(int no)
{
   static int iDigit=0,sum=0;
    if(no!=0)
    {
        iDigit=no%10;
        sum=sum+iDigit;
        no=no/10;
        Sum(no);
    }
    return sum;
}
int main()
{
    int no=0,iRet=0;
    printf("Enter number:");
    scanf("%d",&no);
    iRet=Sum(no);
    printf("Sum is:%d",iRet);

    return 0;
}