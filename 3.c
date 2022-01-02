#include<stdio.h>
void Display(int irow,int icol)
{
    int i=0,j=0;
    for(i=irow;i>=1;i--)
    {
        for(j=icol;j>=1;j--)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
}
int main()
{
    int ivalue1,ivalue2;
   printf("Enter Row:\n");
   scanf("%d",&ivalue1);

   printf("Enter Col:\n");
   scanf("%d",&ivalue2);

   Display(ivalue1,ivalue2);
     return 0;
}