#include<stdio.h>
#include<stdlib.h>
int Largest(int ptr[],int iSize)
{
    int i=0;
    int iMax=ptr[0];
    for(i=0;i<iSize;i++)
    {
        if (ptr[i]>iMax)
        {
            iMax=ptr[i];
        }
    }
    return iMax;
}
int main()
{
    int ilength=0;
    int i=0;
    int *ptr=NULL;
    int iRet=0;
    printf("Enter length:");
    scanf("%d",&ilength);

    ptr=(int*)malloc(sizeof(int)*ilength);

    printf("Enter number: ");
    for(i=0;i<ilength;i++)
    {
        printf("Ente %d: ",i+1);
        scanf("%d",&ptr[i]);
    }
    iRet=Largest(ptr,ilength);
    printf("Largest number is %d:",iRet);
    free(ptr);
    return 0;
}