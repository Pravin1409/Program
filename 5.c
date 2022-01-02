#include<stdio.h>
int Product(int no)
{
   static int iDigit=0,i=0,Mult=1;
   if(no!=0)
   {
    iDigit=no%10;
    Mult=Mult*iDigit;
     no=no/10;
    Product(no);
   }
   return Mult;
}
int main()
{
    int no=0;
    int iRet=0;
    printf("Enter number:\n");
    scanf("%d",&no);

    iRet=Product(no);
    printf("Product Are:%d",iRet);
    return 0;
}