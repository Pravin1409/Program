#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
bool check(UINT ino)
{
    UINT mask=0x00000840;
    UINT Result=0;
    Result=ino&mask;
    if(Result==mask)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    UINT ino=0;
    bool bRet=false;
    printf("Enter number:");
    scanf("%d",&ino);
    bRet=check(ino);
    if(bRet==true)
    {
        printf("7th and 12th bit on");
    }
    else{
        printf("bits are of");
    }
    return 0;
}