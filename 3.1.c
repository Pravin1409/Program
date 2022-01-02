#include<stdio.h>
#include<stdlib.h>
int Last(int ptr[],int iSize,int ino)
{
    int i=0,index=-1;
    for ( i = 0; i < iSize; i++)
    {
        if (ptr[i]==ino)
        {
           index=i;
        }
    }
    return index;
    
}
int main()
{
    int ilength=0;
    int i=0;
    int ivalue=0;
    int iRet=0;
    int*p=NULL;

    printf("Enter Size:\n");
    scanf("%d",&ilength);

    p=(int*)malloc(sizeof(int)*ilength);

    printf("Enter the number:\n");
    for ( i = 0; i < ilength; i++)
    {
        printf("enter %d:",i+1);
        scanf("%d",&p[i]);
    }
    printf("Enter the another number:\n");
    scanf("%d",&ivalue);
     iRet=Last(p,ilength,ivalue);
    if (iRet==-1)
    {
        printf("No cuch number ");
    }
    else
    {
        printf("number at index:%d\n",iRet);
    }
    
     free(p);
     return 0;
     

}
    
