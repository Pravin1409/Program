#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
bool check(UINT ino,UINT i)
{
    UINT mask=0x00000001;
    mask=mask<<(i-1);
    UINT Result=0;
    Result=ino&mask;
    if (Result==mask)
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
    UINT ino=0,i=0;
    bool bRet=false;
    printf("Enter number :");
    scanf("%d",&ino);
        printf("Enter position :");
    scanf("%d",&i);

    bRet=check(ino,i);
    if(bRet==true)
    {
        printf("bit are on");
    }
    else
    {
        printf("bits are off");
    }
    return 0;
}