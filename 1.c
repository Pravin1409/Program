/* write a program which accept number from user and display it multiplication of a factor

input : 12
output:144   (1*2*3*4*6)

input

time coplxcity  n/2
*/


#include<stdio.h>
int MulFact(int ivalue)
{
    int icnt=0;
    int imul=1;
    for(icnt=1;icnt<=(ivalue/2);icnt++)
    {
        if((ivalue%icnt)==0)
        {
            imul=imul*icnt;
        }
    }
    return imul;
}

int main()
{
 int ino=0;
 int iRet=0;
 printf("enter the number");
 scanf("%d",&ino);
 iRet=MulFact(ino);
 printf("%d",iRet);
 
    return 0;
}