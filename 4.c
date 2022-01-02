#include<stdio.h>
int Small(int no)
{
    static int iDigit=0,min=0;
    if(no!=0)
    {
        iDigit=no%10;
        if(iDigit<min)
        {
            min=iDigit;
        }
     no=no/10;
     Small(no);
    }
    return min;
}
int main()
{
    int no=0;
    int iRet=0;
    printf("Enter number: ");
    scanf("%d",&no);
    iRet=Small(no);
    printf("Small Digit are:%d",iRet);
    return 0;
}