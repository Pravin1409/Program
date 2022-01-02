#include<stdio.h>
void  Display(int ino)
{
    int icnt=0;
    for(icnt=1;icnt<=ino;icnt++)
    {
        printf("\t%d\t*",icnt);
    }
}
int main()
{
     int ivalue=0;
     printf("Enter the number :");
     scanf("%d",&ivalue);

     Display(ivalue);
     return 0;
}