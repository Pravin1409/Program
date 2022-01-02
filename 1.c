#include<stdio.h>
void Display(int irow,int icols)
{
    int i=0;
    int j=0;
    for(i=1;i<=irow;i++)
    {
        for(j=1;j<=icols;j++)
        {
            printf("*\t");
        }
        printf("\n");
    }


}
int main()
{
    int ivalue1=0;
    int ivalue2=0;
    printf("Enter 1st\n");
    scanf("%d",&ivalue1);

    printf("Enter 2st\n");
    scanf("%d",&ivalue2);

    Display(ivalue1,ivalue2);

     return 0;
}