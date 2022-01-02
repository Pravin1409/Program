#include<stdio.h>
#include<stdlib.h>
int Product(int p[],int ino)
{
    
}
int main()
{int*p=NULL;

int ilength=0,icnt=0,iRet=0;
printf("Enter length");
scanf("%d",&ilength);

p=(int*)malloc(sizeof(int)*ilength);

printf("Enter %d size:\n",ilength);
for(icnt=0;icnt<ilength;icnt++)
{
    printf("Ente %d",icnt+1);
    scanf("%d",&p[icnt]);
}
iRet=Product(p,ilength);
printf("Result:%d",iRet);
free(p);

    return 0;
}