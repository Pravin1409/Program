#include<stdio.h>
void Display(int ino)
{
    int icnt=0;
    for(icnt=ino;icnt>=1;icnt--)
    {
        printf("\t%d\t#",icnt);
    }
}
int main()
{
    int ivalue=0;
    printf("enter number ");
    scanf("%d",&ivalue);
    Display(ivalue);
     return 0;
}