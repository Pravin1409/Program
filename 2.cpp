#include<iostream>
using namespace std;
typedef unsigned int UINT;
UINT OffBit(UINT iNo,UINT iPos)
{
    UINT imask=0x0000001;
    UINT iResult=0;
    imask=imask<<(iPos-1);
    iResult=iNo&imask;
    return iResult;
}
int main()
{
    UINT ino=0,iPos=0,iRet=0;
    cout<<"Enter number:\n";
    cin>>ino;
    cout<<"Enter position:\n";
    cin>>iPos;
    iRet=OffBit(ino,iPos);
    cout<<"modified number"<<iRet<<"\n";
    return 0;
}