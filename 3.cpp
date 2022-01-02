#include<iostream>
using namespace std;
typedef unsigned int UINT;
UINT OnBit(UINT iNo,UINT iPos)
{
    UINT iMask=0x00000001;
    iMask=iMask<<(iPos-1);
    UINT iResult=0;
    iResult=iNo|iMask;
    return iResult;
}
int main()
{
    UINT ino=0,iPos=0,iRet=0;
    cout<<"Enter number:";
    cin>>ino;

    cout<<"Enter Position:";
    cin>>iPos;

    iRet=OnBit(ino,iPos);
    cout<<"modified number are:"<<iRet<<"\n";
    return 0;
}