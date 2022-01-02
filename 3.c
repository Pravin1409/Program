/*
write a program which range  number from user and return addition of all number in between that range.(range should contain positive number only) 
*/
#include<stdio.h>
int RangeSum(int Start,int End)
{
   
    int icnt=0;
    int isum=0;
    
    if ((Start<0)&&(End>0))
    {
        printf("Invalid range\n");
    }
    if(Start>End)
    {
        printf("Invalid Range");
    }
   else
   {
        for (icnt = Start; icnt <= End; icnt++)
    {
        isum=isum+icnt;
    }
    return isum;
   }
}


int main()
{
    int ivalue1=0;
    int ivalue2=0;
    int iRet=0;

    printf("Enter the 1number: ");
    scanf("%d",&ivalue1);
    printf("Enter the Second number: ");
    scanf("%d",&ivalue2);

    iRet=RangeSum(ivalue1,ivalue2);
    printf("Addition is %d",iRet);


     return 0;
}