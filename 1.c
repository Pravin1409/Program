/*
Write a program which accept number from user and display all number in between that range. 
*/
#include<stdio.h>
void Range(int Start,int End)
{   if (Start>End)
    {
        printf("Invalid range");
    }

    int icnt=0;
    for(icnt=Start;icnt<=End;icnt++)
    {
        printf("%d\n",icnt);
    }
}
int main()
{
    int ivalue1=0;
    int ivalue2=0;

    printf("Enter the 1st number:");
    scanf("%d",&ivalue1);

    printf("enter the 2nd number:");
    scanf("%d",&ivalue2);

    Range(ivalue1,ivalue2);


     return 0;
}