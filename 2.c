#include<stdio.h>
void Display(int no)
{
   static int i=1;
    if(i<=no)
    {
        printf("%d\t",i);
        i++;
        Display(no);
    }
}
int main()
{
    int no=0;
    printf("Enter number:\n");
    scanf("%d",&no);
    Display(no);
    return 0;
}