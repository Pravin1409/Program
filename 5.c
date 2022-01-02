/*
Write a program which accept range from user and display all number in between that range in reverse order
*/

#include<stdio.h>
void Display(int Start,int End)
{

    int icnt=0;
    if(Start>End)
    {
        printf("Invslid range");
    }
    for(icnt=End;icnt>=Start;icnt--)
    {
        printf("%d\n",icnt);
    }


}
int main()
{
    int ivalue1;
    int ivalue2;

    printf("Enter the number :");
    scanf("%d",&ivalue1);

    printf("End point:");
    scanf("%d",&ivalue2);

    Display(ivalue1,ivalue2);

    return 0;
}
