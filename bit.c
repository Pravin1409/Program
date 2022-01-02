/*
check 4th bit on or of
*/
#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
bool check(UINT ino)
{
    UINT mask=0x00000008;
    UINT iResult=0;
    iResult=ino&mask;
    if(iResult==mask)
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
        printf("4th bit on");
    }
    else
    {
        printf("4th bit of");
    }
    return 0;
}