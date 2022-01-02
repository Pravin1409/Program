#include<stdio.h>
#include<stdlib.h>
int CountEven(int p[],int iSize)
{
    int icnt=0,i=0;
    for(icnt=0;icnt<iSize;icnt++)
    {
        if ((p[icnt]%2)==0)
        {
        
            i++;
        }
  
    }
          return i;
}
int main()
{
    int icnt=0,iRet=0;
    int size=0;
    int*p=NULL;

    printf("Enter the size:\n");
    scanf("%d",&size);

    p=(int*)malloc(sizeof(int)*size);
    if(p==NULL)
    {
        printf("unable");
    }

    printf("Enter %d size\n",size);
    for(icnt=0;icnt<size;icnt++)
    {
        scanf("%d",&p[icnt]);
    }
    iRet=CountEven(p,size);
    printf("Result: %d",iRet);

    free(p);
     return 0;
}