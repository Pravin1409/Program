#include<stdio.h>
#include<stdlib.h>
void Range(int ptr[],int iSize,int iStart,int iEnd)
{
    int i=0;
    for(i=0;i<iSize;i++)
    {
        if((ptr[i]>iStart)&&(ptr[i]<iEnd))
        {
            printf("%d\t",ptr[i]);
        }
    }
}
int main()
{
    int ilength=0; //length
    int*ptr=NULL;  //array ptr
    int i=0;    //for loop
    int value1=0;  // Start  range
    int value2=0;
     int   iRet=0;  // End range

    printf("Enter the length:");
    scanf("%d",&ilength);

    printf("Enter Start:");
    scanf("%d",&value1);

     printf("Enter end:");
    scanf("%d",&value2);


    ptr=(int*)malloc(sizeof(int)*ilength);

    printf("Enter the number: \n");
    for(i=0;i<ilength;i++)
    {
        printf("Enter %d :\n",i+1);
        scanf("%d",&ptr[i]);
    }

       Range(ptr,ilength,value1,value2);
    free(ptr);

    return 0;
}