#include<stdio.h>
void Display()
{
    int i=0;
    for(i=0;i<=127;i++)
    {
        printf(" %c\t %d\t %x\t %o\t \n",i,i,i,i,i);
    }
}
int main()
{
    Display();
    return 0;
}