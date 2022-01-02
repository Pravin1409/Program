#include<stdio.h>
int Reverse(int no)
{
     static int Rev=0,iDigit=0;
    if(no!=0)
    {
        iDigit=no%10;
        Rev=(Rev*10)+iDigit;
        no=no/10;
        Reverse(no);
    }
    return Rev;

}
int main()
{
    int no=0;
    int iRet=0;
    printf("Enter number:\n");
    scanf("%d",&no);
    iRet=Reverse(no);
    printf("Reverse num,ber are:%d",iRet);
    return 0;
}