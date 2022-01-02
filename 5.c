#include<stdio.h>
#include<stdbool.h>
void Display(char c)
{
    if (c=='A')
    {
        printf("Exam time is 7 Am");
    }
    else if(c=='B')
    {
        printf("Exam time: 8.30 AM");
    }
    else if (c=='C')
    {
        printf("Exam time: 9.20 Am");
    }
    else if (c=='D')
    {
        printf("Exam time : 10.30 Am");
    }
    else
    {
        printf("Please enter correct Division");
    }
    
    
    
}
int main()
{
    char ch='\0';

    printf("Enter char: ");
    scanf("%c",&ch);
    Display(ch);
    return 0;
}