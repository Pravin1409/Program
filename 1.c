#include<stdio.h>
typedef unsigned int UINT;
UINT OffBit(UINT ino)
{
    UINT mask=0xFFFFFFBF;
    UINT Result=0;
    Result=ino&mask;
     return Result;
}
int main()
{
    UINT ino=0;
    UINT iRet=0;
    printf("Enter number");
    scanf("%d",&ino);
    iRet=OffBit(ino);

    printf(" value:%d",iRet);
    return 0;
}