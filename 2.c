/*
Write a program which accept width & height of rectangle from user and calculate its area. 
*/
#include<stdio.h>
double RectangelArea(float width,float height)
{
    float Area=0;
int icnt=0;
    for(icnt=1;icnt<=height;icnt++)
    {
        Area=width*height;
    }
    
    return Area;
}
int main()
{ 
    float ivalue1=0.0;
    float ivalue2=0.0;
    double dRet=0;

    printf("Enter width:");
    scanf("%f",&ivalue1);

    printf("Enter height:");
    scanf("%f",&ivalue2);

    dRet=RectangelArea(ivalue1,ivalue2);
    printf("Area=%f",dRet);

    return 0;
}