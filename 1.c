#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool Check(int ptr[],int iSize,int ino)
{
    int i=0;
    for(i=0;i<iSize;i++)
    {
        if (ptr[i]==ino)
        {
             break;
        }
    }
    if (i==iSize)
    {
        return false;
    }
    else
    {
        return true;
    }
    
}
int main()
{
    int ilength=0;
    int ino=0;
    int i=0;
    int*ptr=NULL;
    bool bRet=false;

    printf("Enter the length:");
    scanf("%d",&ilength);

    printf("Enter Another number:");
    scanf("%d",&ino);

    ptr=(int*)malloc(sizeof(int)*ilength);

    printf("Enter the size:");
    for(i=0;i<ilength;i++)
    {
        printf("Enter%d :\n",i+1);
        scanf("%d",&ptr[i]);
    }
    bRet=Check(ptr,ilength,ino);
    if (bRet==true)
    {
        printf("Number is present");
    }
    else
    {
        printf("Number is not present");
    }
    free(ptr);
    return 0;
}