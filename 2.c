/*
write a program which accept number from user and display its factor in decreasing order

input:12
Output:6  4   3   2   1

input:13
output:1

input:10
output:5  2   1
*/
#include<stdio.h>
 void Display(int ivalue)
 {
        if(ivalue<0)
      {
        ivalue=-ivalue;
      }

 int icnt=0;
 for(icnt=(ivalue/2);icnt>=1;icnt--)
{
   if((ivalue%icnt)==0)
     {
      printf("%d\n",icnt);
    }
  }
 }

int main()
{
int ino=0;
printf("enter the number =");
scanf("%d",&ino);
 Display(ino);

    return 0;
}