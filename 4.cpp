#include<iostream>
using namespace std;
typedef unsigned int UINT;
UINT ToggleBit(UINT iNo,UINT iPos)
{
    UINT iMask=0x00000001;
    iMask=iMask<<(iPos-1);
    UINT iResult=0;
    iResult=iNo^iMask;
    return iResult;
}
int main()
{
    UINT ino=0,iPos=0,iRet=0;
    cout<<"Enter number:";
    cin>>ino;
    cout<<"Enter position:";
    cin>>iPos;

    iRet= ToggleBit(ino,iPos);
    cout<<"number are:"<<iRet<<"\n";
    return 0;
}