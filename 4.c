#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0
int Check(int ino)
{
    if((ino%5)==0)
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
printf("enter the number=");
scanf("%d",&ivalue);
bRet=Check(ivalue);
if(bRet==TRUE)
{
    printf("divisible 5");
}
else
{
    printf("not divisible 5");
}
return 0;
}