/*
Write a program which accept area in square feet and convert it into square meter (1square feet=0.0929)
*/
#include<stdio.h>
double SquareMeter(int ino)
{
    float Area=0;
    int icnt=0;
    float Squarefeet=0.0929;
    for(icnt=0;icnt<=ino;icnt++)
    {
        Area=Squarefeet*ino;
    }
    return Area;
}
int main()
{
    int ivalue=0;
    double dRet=0;
    printf("Enter area in square feet");
    scanf("%d",&ivalue);
    dRet=SquareMeter(ivalue);
    printf("area in square meter=%f",dRet);
    return 0;
}