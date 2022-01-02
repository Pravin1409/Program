/*
Accept N number from user and return difference between summation of even element and sum of 
odd element 
*/
#include<stdio.h>
#include<stdlib.h>
int Difference(int p[],int iSize)
{
    int icnt=0,isum=0,isum1=0,diff=0;
    for(icnt=0;icnt<iSize;icnt++)
    {
        if (icnt%2!=0)
        {
            isum=isum+p[icnt];
        }
    }
    
     for(icnt=0;icnt<iSize;icnt++)
    {
        if (icnt%2==0)
        {
            isum1=isum1+p[icnt];
        }
        diff=isum-isum1;
    }
    return diff;
    
}

int main()
{
    int isize=0;
    int icnt=0,iRet=0;
    int*p=NULL;

    printf("Enter number of element:\n");
    scanf("%d",&isize);

    p=(int*)malloc(sizeof(int)*isize);
    if(p==NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }
    printf("Enter %d element:\n",isize);

    for(icnt=0;icnt<isize;icnt++)
    {
        scanf("%d",&p[icnt]);
    }

    iRet=Difference(p,isize);
    printf("Result %d",iRet);
    free(p);
     return 0;
}