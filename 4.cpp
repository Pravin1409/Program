#include<iostream>
using namespace std;
typedef unsigned int UINT;
UINT ToggleBit(UINT iNo)
{
    UINT iMask=0x00000040;
    UINT iResult=0;
    iResult=iNo^iMask;
    return iResult;
}
int main()
{
    UINT ino=0,iRet=0;
    cout<<"Enter number:\n";
    cin>>ino;
    iRet=ToggleBit(ino);
    cout<<"modified no is:"<<iRet<<"\n";

    return 0;
}