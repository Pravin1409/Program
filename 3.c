#include<stdio.h>
void Display(int no)
{
   static int i=4;
   if(i>=1)
   {
       printf("%d\t",i);
       i--;
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