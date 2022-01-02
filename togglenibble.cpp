#include<iostream>
using namespace std;
typedef unsigned int UINT;
UINT ToggleNibble(UINT ino)
{
    UINT iMask=0xF000000F;
    UINT iResult=0;
    iResult=ino^iMask;
    return iResult;
}
int main()
{
    UINT ino=0,iRet=0;
    cout<<"Enter number:";
    cin>>ino;

    iRet=ToggleNibble(ino);
    cout<<"modified number are:"<<iRet;
    return 0;
}