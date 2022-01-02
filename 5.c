#include<stdio.h>
#include<stdlib.h>
int Frequency(int p[],int ino,int isize)
{
    int icnt=0;
    int i=0;
    for(icnt=0;icnt<ino;icnt++)
    {
        if (p[icnt]==isize)
        {
            i++;
        }
        
    }
    return i++;
}
int main()
{
    int*p=NULL;
    int ilength=0,icnt=0,iRet=0,NO=0;
 

    printf("Enter Length:");
    scanf("%d",&ilength);

    p=(int*)malloc(sizeof(int)*ilength);
    if (p==NULL)
    {
        printf("Unable allocate memory");
    }

    printf("Enter %d Size:\n",ilength);
    for(icnt=0;icnt<ilength;icnt++)
    {
        printf("Enter %d number:\n",icnt+1);
        scanf("%d",&p[icnt]);
    }
       printf("NO:");
    scanf("%d",&NO);
    iRet=Frequency(p,ilength,NO);
    printf("Count:%d",iRet);
    

    return 0;
}