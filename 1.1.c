/*

Write a program which accept one number from user and print that number of even number on screen 
*/


#include<stdio.h>
void printEven(int ivalue)
{
 int i=0;
 int sum=0;
 int num=2;
  for (i = 1; i <=ivalue; i++)
  {
    if (sum=num*i)
    {
       printf(" %d\n",sum);
    } 
  }
}
int main()
{ 
    int ino=0;
    printf("enter the number");
    scanf("%d",&ino);
    printEven(ino);
 return 0;
}