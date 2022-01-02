#include<stdio.h>
void Display(int irow,int icol)
{
    int i=0,j=0;
    char ch='A';
    char ch1='a';
    for(i=1,ch='A',ch1='a';i<=irow;i++,ch++,ch1++)
    {
        for(j=1,ch='A',ch1='a';j<=icol;j++,ch++,ch1++)
        {
            if (i%2==0)
            {
             printf("%c\t",ch1);
            }
            else{
                printf("%c\t",ch);
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

    printf("Enter Col:\n");
    scanf("%d",&ivalue2);

    Display(ivalue1,ivalue2);
     return 0;
}