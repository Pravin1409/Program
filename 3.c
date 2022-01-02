#include<stdio.h>
void Display(char c)
{
    for (int i = c; i <='Z'; i++)
    {
        if ((c>='A')&&(c<='Z'))
        {
            printf("%c\t",i);
        }
        
    }
    for (int i = c; i >= 'a'; i--)
    {
        if ((c>='a')&&(c<='z'))
        {
            printf("%c\t",i);
        }
        
    }
    
}
int main()
{
    char ch;
    printf("Enter char:");
    scanf("%c",&ch);
    Display(ch);
    return 0;
}