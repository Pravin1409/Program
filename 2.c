#include<stdio.h>
int Max(int no)
{
   static int idigit=0,max=0;
    if(no!=0)
    {
        idigit=no%10;
        if(idigit>max)
        {
            max=idigit;
        }
        no=no/10;
        Max(no);
    }
    return idigit;
}
int main()
{
    int no=0;
    int iRret=0;

    printf("Enter the nuber\n");
    scanf("%d",&no);
    iRret=Max(no);
    printf("Maximum digit are:%d",iRret);
    return 0;
}