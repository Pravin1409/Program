#include<iostream>
#include<stdbool.h>
using namespace std;
typedef unsigned int UINT;
bool ChkBit(UINT ino)
{
    UINT iMask=0x00000900;
    UINT iResult=0;
    iResult=ino&iMask;
    if(iResult==iMask)
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

    cout<<"Enter number:";
    cin>>ino;

    bRet=ChkBit(ino);
    if(bRet==true)
    {
        cout<<"bit on";
    }
    else
    {
        cout<<"bit off";
    }
    return 0;
}