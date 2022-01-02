#include<stdio.h>
#include<stdlib.h>

 int Check(int p[],int isize)
{
    int icnt=0;
    for(icnt=0;icnt<isize;icnt++)
    {
        if (p[icnt]==11)
        {
            icnt++;
        }
       
       
    }
     return icnt;
}
int main()
{
    int ino=0;
    int icnt=0;
    int iRet=0;
    int*p=NULL;

    printf("Enter number:\n");
    scanf("%d",&ino);

    p=(int*)malloc(sizeof(int)*ino);

    printf("enter %d element",ino);
    for(icnt=0;icnt<ino;icnt++)
    {
        scanf("%d",&p[icnt]);
    }

    iRet=Check(p,ino);
    printf("result:%d",iRet);

    free(p);
    

    
     return 0;
}