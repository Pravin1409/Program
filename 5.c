#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check(int ino)
{
 if((ino%2)==0)
 {
     return TRUE;

 }
 else
 {
     return FALSE;
 }
}
int main()
{
    int ivalue=0;
    BOOL bRet=FALSE;
    printf("enter the number =");
    scanf("%d",&ivalue);
    bRet=Check(ivalue);
    if(bRet==0)
    {
        printf("the number is even ");
    }
    else
    {

        printf("the number is odd");
    }

    return 0;
}