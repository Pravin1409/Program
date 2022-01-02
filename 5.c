#include<stdio.h>
#include<stdlib.h>
void Display(int p[],int iSize)
{
    int icnt=0;
    for(icnt=0;icnt<iSize;icnt++)
    {
        if (p[icnt]%11==0)
        {
            printf("%d\t",p[icnt]);
        }
        
    }
}
int main()
{
    int*p=0;
    int isize=0,icnt=0;

    printf("Enter number of element:\n");
    scanf("%d",&isize);

    p=(int*)malloc(sizeof(int)*isize);
    if (p==NULL)
    {
        printf("unable");
        return -1;
    }
    
    printf("entr%d number\n",isize);
    for(icnt=0;icnt<isize;icnt++)
    {
        scanf("%d",&p[icnt]);
    }
    
    Display(p,isize);
    free(p);
     return 0;
}