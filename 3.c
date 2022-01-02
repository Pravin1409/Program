#include<stdio.h>
#include<stdlib.h>

int Difference(int ptr[],int iSize)
{
    int i=0;
    int iMax=ptr[0];
    int iMin=ptr[0];
    for (i=0;i<iSize;i++)
    {
        if(ptr[i]>iMax)
        {
            iMax=ptr[i];
        }
        if (ptr[i]<iMin)
        {
            iMin=ptr[i];
        }
        
    }
    return iMax-iMin;
}
int main()
{
    int ilength=0;
    int i=0;
    int*ptr=NULL;
    int iRet=0;

    printf("Enter the length:");
    scanf("%d",&ilength);

    ptr=(int*)malloc(sizeof(int)*ilength);

    printf("Enter number: ");

    for(i=0;i<ilength;i++)
    {
        printf("Enter %d: ",i+1);
        scanf("%d",&ptr[i]);
    }

    iRet=Difference(ptr,ilength);

    printf("Difference is %d",iRet);
    free(ptr);
    return 0;

}