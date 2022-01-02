/*
write a program which accept tempreture in Fahrenheit and convert it into celsius.
*/

#include<stdio.h>
double FhtoCelsius(float no)
{
    int icnt=0;
    // float celsius=(no-32);
    float celsious=0;
    for(icnt=0;icnt<=no;icnt++)
    {
        celsious=(icnt-32)*0.555;
    }
    
    return celsious;


}
int main()
{
    float value=0;
    double dRet=0;

    printf("Enter temp in Fh:");
    scanf("%f",&value);

    dRet=FhtoCelsius(value);
    printf("%f celsius",dRet);

    return 0;
}