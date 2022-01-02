#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool Check(int p[],int isize)
{
    int icnt=0;
    int i=0;
    for(icnt=0;icnt<isize;icnt++)
    {
        if (p[icnt]==11)
        {
            break;
        }
    }
    if(i==isize)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    int ino=0;
    int icnt=0;
    bool bRet=false;
    int*p=NULL;

    printf("Enter number:\n");
    scanf("%d",&ino);

    p=(int*)malloc(sizeof(int)*ino);

    printf("enter %d element",ino);
    for(icnt=0;icnt<ino;icnt++)
    {
        scanf("%d",&p[icnt]);
    }

    bRet=Check(p,ino);
    if (bRet==true)
    {
        printf("11 contain");
    }
    else
    {
        printf("11 not contain");
    }

    free(p);
    

    
     return 0;
}