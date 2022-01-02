#include<stdio.h>
void Display(int iRow,int iCol)
{
    int i=0,j=0;
    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            if (i<=j)
            {
                printf("%d\t",j);
            }
           
            
        }
        printf("\n");
    }
}
int main()
{
    int ivalue1=0,ivalue2=0;

    printf("Enter row:");
    scanf("%d",&ivalue1);

    printf("Enter Col");
    scanf("%d",&ivalue2);


    Display(ivalue1,ivalue2);

     return 0;
}