#include<stdio.h>
#include<stdlib.h>
int Smaller(int ptr[],int ino)
{
    int i=0;
    int iMin=ptr[0];
    for(i=0;i<ino;i++)
    {
        if(ptr[i]<iMin)
        {
            iMin=ptr[i];
        }

    }
    return iMin;
}

int main()
{
    int ilength=0;
    int i=0; // for loop
    int *ptr=NULL;
    int iRet=0;

    printf("Enter length:");
    scanf("%d",&ilength);

    ptr=(int*)malloc(sizeof(int)*ilength);

    printf("Enter number:");
    for(i=0;i<ilength;i++)
    {
        printf("Enter %d:",i+1);
        scanf("%d",&ptr[i]);
    }

    iRet=Smaller(ptr,ilength);
    printf(" Smaller%d",iRet);
    free(ptr);

    return 0;
}