#include<stdio.h>
void Disply(int no)
{
   static int i=1;
   
   if(i<=no)
   {
       printf("*\t");
       i++;
       Disply(no);
   }
}

int main()

{
    int no=0;
    printf("Enter number");
    scanf("%d",&no);
    Disply(no);
    return 0;
}