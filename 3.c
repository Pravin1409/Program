/* Write a program which accept number from user and display all non factor.
input:12
output:5    7   8   9   10  11

input: 13
output: 2   3   4   5   6   7   8   9   10  11  12

input:10
output:3    4   6   7   8   9

*/

#include<stdio.h>
 void NonFact(int ivalue)
 {   
     /////////////////////////////////////////////////
     if(ivalue<0)
     {
         ivalue=-ivalue;
     }
     ///////////////////////////////////////////////
     if(ivalue==0)
     {
         printf("You enter the number=");
     }
     ///////////////////////////////////////////////
     
///////////////////////////////////////////////////
      int icnt=0;

     for(icnt=1;icnt<=ivalue;icnt++)
     {
         if((ivalue%icnt)!=0)
         {
             printf("%d\n",icnt);
         }
     }
//////////////////////////////////////////////////
 }

int main()
{
 int ino =0;
 printf("enter the number=");
 scanf("%d",&ino);
 printf("number are:\n");
  NonFact(ino);

    return 0;
}