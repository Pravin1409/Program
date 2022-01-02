#include<stdio.h>
void Display()
{
    
     static i=1,ch='A';
    if(i<=5)
    {
        printf("%c\t",ch);
        i++,ch++;
        Display();
    }
}
int main()
{
    Display();
    return 0;
}