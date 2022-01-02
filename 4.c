#include<stdio.h>
void Display(int irow,int icol)
{
    int i=0,j=0;
    for(i=1;i<=irow;i++)
    {
        for(j=1;j<=icol;j++)
        {
            if(j%2==0)
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
            }
            
        }
        printf("\n");
    }
}
int main()
{
    int ivalue1=0,ivalue2=0;

    printf("Enter Row:\n");
    scanf("%d",&ivalue1);

    printf("Enter Row:\n");
    scanf("%d",&ivalue2);
    
    Display(ivalue1,ivalue2);
     return 0;
}