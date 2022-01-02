/*
Write a program which accept range from user and display all even number in between that range
*/
#include<stdio.h>
void DisplayEven(int Start,int End)
{
    if (Start>End)
    {
        printf("Invalid choice");
    }
    
    int icnt=0;
    for(icnt=Start;icnt<=End;icnt++)
    {
        if(icnt%2==0)
        {
            printf("%d\n",icnt);
        }
    }
}
int main()
{
    int ivalue1=0;
    int ivalue2=0;

    printf("Enter Starting point");
    scanf("%d",&ivalue1);

    printf("Enter Endning point");
    scanf("%d",&ivalue2);

    DisplayEven(ivalue1,ivalue2);


    return 0;
}