#include<stdio.h>
int Divide(int ino1,int ino2)
{
    int iAns=0;
    if(ino2<0)
    {
        return -1;
    }
    iAns=ino1/ino2;
    return iAns;
}

int main()
{
    int ivalue1=20,ivalue2=2;
     int iRet=0;

    iRet=Divide(ivalue1,ivalue2);
    printf("division is %d",iRet);
    return 0;
}

