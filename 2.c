#include<stdio.h>
int Display(int ino)
{
   while (ino>0)
    {
        printf("*");
        ino--;
        
    }
}
int main()
{
    int ivalue=0;
    printf("enter the number=");
    scanf("%d",&ivalue);
    Display(ivalue);
    return 0;
}