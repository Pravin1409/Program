/*

Write a program which accept one number from user and print that number of even number on screen 
*/


#include<stdio.h>
void printEven(int ivalue)
{
 int icnt=0;
  for (icnt = 1; icnt <=ivalue*2; icnt++)
  {
    if (icnt%2==0)
    {
       printf("%d\n",icnt);
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