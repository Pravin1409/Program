/*Write a program accept number from user and count frequency of 2 in it */

#include<stdio.h>
int CountTwo(int ino)
{
 int iDigit=0;
 int icnt=0;
 while (ino!=0)
 {
     iDigit=ino%10;
     if (iDigit==0)
     {
         icnt++;
     }
     ino=ino/10;
 }

return icnt++;

}
int main()
{
    int ivalue=0;
    int iRet=0;
    printf("enter the number ");
    scanf("%d",&ivalue);

    iRet=CountTwo(ivalue);
    printf("The Frequency of2= %d",iRet);
     return 0;
}