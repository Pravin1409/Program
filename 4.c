#include<stdio.h>
void Display(char c)
{
   if ((c>='A')&&(c<='Z'))
   {
       printf("%c",c+32);
   }
   if ((c>='a')&&(c<='z'))
   {
       printf("%c",c-32);
   }
   
   

}

int main()
{
char cValue='\0';
printf("enter the character =");
scanf("%c",&cValue);
Display(cValue);
    return 0;
}