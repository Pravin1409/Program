/*
write a program which accept number from user and display its digits in reverse order
*/
#include<stdio.h>
void Display(int ino)
{
    /////////////////////////////////////////
    if (ino<0)
    {
        ino=-ino;   // UPDATOR
    }
    ////////////////////////////////////////
    int iDigit=0;
    int Rev=0;
    while (ino!=0)
    {
        iDigit=ino%10;
        printf("%d\n",iDigit);
        // Rev=(Rev*10)+iDigit;
        ino=ino/10;
    } 

}
int main()
{
    int ivalue=0;
    printf("Enter the number=");
    scanf("%d",&ivalue);

    Display(ivalue);
     return 0;
}