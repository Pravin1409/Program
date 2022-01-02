#include<stdio.h>
void Display()
{
    
     static i=1,ch='a';
    if(i<=6)
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