#include<stdio.h>

int Fact(int no)
{
    static int fact=1,i=1;
    if(i<=no)
    {
        fact=fact*i;
        i++;
        Fact(no);
    }
    return fact;
}
int main()
{
    int no=0,iRet=0;
    printf("Enter number:");
    scanf("%d",&no);

    iRet=Fact(no);
    printf("Factorial Are:%d",iRet);
    return 0;
}