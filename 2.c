#include<stdio.h>
#include<stdlib.h>
int Firstindex(int ptr[],int iSizel,int ino)
{
    int i=0;
    for ( i = 0; i < iSizel; i++)
    {
        if (ptr[i]==ino)
        {
            break;
        }
        
    }
    if (i==iSizel)
    {
        return -1;
    }
    else
    {
        return i;
    }
    

}
int main()
{
    int ilength=0;
    int ivalue=0;
    int*p=NULL;
    int i=0;
    int iRet=0;
    printf("Enter Length:");
    scanf("%d",&ilength);

    p=(int*)malloc(sizeof(int)*ilength);
    printf("Enter number:%d\n",ilength);
    for ( i = 0; i <ilength; i++)
    {
        printf("Enter element:%d\n",i+1);
        scanf("%d",&p[i]);
    }
    printf("Enter another number:");
    scanf("%d",&ivalue);

    iRet=Firstindex(p,ilength,ivalue);
    if (iRet==-1)
    {
        printf("No such a number");
    }
    else
    {
        printf("Number present At index:%d",iRet);
    }
    free(p);
    return 0;
}