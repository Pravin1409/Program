/*
Write a program which accept radius of circle from user and calculate its area.
consider value of PI as 3.14 (Area=Radius*Radius)
*/

#include<stdio.h>
double AreaCircle(int Radius)
{
    float Area=0;

    Area= 3.14*Radius*Radius;
    return Area;
}
int main()
{
    float fvalue=0;
    double dRet=0;

    printf("Enter Radius of circle");
    scanf("%f",&fvalue);

    dRet=AreaCircle(fvalue);
    printf("Area=%f",dRet);

    return 0;
}