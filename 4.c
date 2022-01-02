/*
Write the program accept range from user and return addition of all even number in between range.
*/
#include<stdio.h>
int RangeSumEven(int Start,int End)
{
    int icnt=0;
    int isum=0;

    if(Start<0)
    {
        printf("Invalid choice");
    }
    else
    {
    for(icnt=Start;icnt<=End;icnt++)
    {
        if(icnt%2==0)
        {
           isum=isum+icnt;
        }
    }
    return isum;
    }

}


int  main()
{
    int ivalue1=0;
    int ivalue2=0;
    int iRet=0;

    printf("Enter Start point");
    scanf("%d",&ivalue1);

    printf("Enter End point");
    scanf("%d",&ivalue2);

    iRet=RangeSumEven(ivalue1,ivalue2);
    printf("%d",iRet);




    return 0;
}