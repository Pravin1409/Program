#include<stdio.h>
#include<stdlib.h>
void Display(int p[],int iSize)
{
    int icnt=0;
    for(icnt=0;icnt<iSize;icnt++)
    {
        if (p[icnt]%5==0)
        {
            printf("%d\t",p[icnt]);
        }
        
    }
}
int main()
{
    int isize=0, icnt=0,iRet=0;
    int*p=NULL;

    printf("Enter number of element:\n");
    scanf("%d",&isize);

    p=(int*)malloc(sizeof(int)*isize);

    if (p==NULL)
    {
        printf("unable to allocate the memory:\n");
    }
    

    printf("enter %d element\n",isize);
    for(icnt=0;icnt<isize;icnt++)
    {
        printf("Enter element:%d\n",icnt+1);
        scanf("%d",&p[icnt]);

    }

    Display(p,isize);
    free(p);
     return 0;
}