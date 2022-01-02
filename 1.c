#include<stdio.h>
void Display(int irow,int icol)
{
    int i=0,j=0;
    char ch='\0';
    for(i=1,ch='A';i<=irow;i++,ch++)
    {
        for(j=1,ch='A';j<=icol;j++,ch++)
        {
                printf("%c\t",ch);
        }
        printf("\n");
    }
}
int main()
{
    int ivalue1=0,ivalue2=0;
    printf("Enter row:\n");
    scanf("%d",&ivalue1);

    printf("Enter Col:\n");
    scanf("%d",&ivalue2);
     Display(ivalue1,ivalue2);
     return 0;
}