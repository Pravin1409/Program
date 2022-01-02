#include<iostream>
#include<stdbool.h>
using namespace std;
typedef unsigned int UINT;
bool ChkBit(UINT iNo,UINT iPos)
{
    UINT imask=0x00000001;
    imask=imask<<(iPos-1);
    UINT iResult=0;
    iResult=iNo&imask;
    if(iResult==imask)
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
    UINT ino=0,iPos=0;
    bool bRet=false;
    cout<<"Enter enumber:\n";
    cin>>ino;
    cout<<"Enter position:\n";
    cin>>iPos;
    bRet=ChkBit(ino,iPos);
    if(bRet==true)
    {
        cout<<"Bit on\n";
    }
    else
    {
        cout<<"bit off\n";
    }
}