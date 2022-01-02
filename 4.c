#include<stdio.h>
#include<stdlib.h>
void Display(int ptr[],int iSize)
{
    
    
}
int main()
{
    int ilength=0;
    int i=0;
    int*ptr=0;
    
    printf("Enter the :");
    scanf("%d",&ilength);

    ptr=(int*)malloc(sizeof(int)*ilength);

    for(i=0;i<ilength;i++)
    {
        scanf("%d",&ptr[i]);
    }
     
     Display(ptr,ilength);
     free(ptr);

    return 0;
}