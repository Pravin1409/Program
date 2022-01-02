#include<stdio.h>
#include<stdlib.h>
int LastOccurance(int ptr[],int iSize,int ino)
{
    int i=0;
    int index=-1;
    for ( i = iSize; i > 0; i--)
    {
        if (ptr[i]==ino)
        {
            break;
        }
        
    }
    if (i==iSize)
    {
        return -1;
    }
    else
    {
        return i;
    }
}
int main()
{
    int ilength=0;
    int ivalue=0;
    int iRet=0;
    int i=0;
    int*p=NULL;

    printf("Enter Size:\n");
    scanf("%d",&ilength);

    p=(int*)malloc(sizeof(int)*ilength);
     
     printf("Enter %dnumber:\n",ilength);
     for ( i = 0; i <ilength; i++)
     {
         printf("Enter %d: ",i+1);
         scanf("%d",&p[i]);
     }
     printf("Enter Another number:");
     scanf("%d",&ivalue);

     iRet=LastOccurance(p,ilength,ivalue);
     if (iRet==-1)
     {
         printf("There is a no such number.");
     }
     else
     {
         printf("Present at index:%d",iRet);
     }
     free(p);
     return 0;
     
     
}