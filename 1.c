#include<stdio.h>
int Display(int ino)
{
    int icnt=0;
    for (icnt = 0; icnt<ino; icnt++)
    {
        printf("*");
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