/*
write program aceept number from user and position. AND toggle bit at that position.
*/

#include<iostream>
using namespace std;
typedef unsigned int  UINT;
UINT ToggleBit(UINT iNo,UINT iPos)
{
    UINT iMask=0x00000001;
    iMask=iMask<<(iPos-1);
    UINT iResult=0;
    iResult=iNo^iMask;
    return iMask;
}
int main()
{
    UINT ino=0,i=0,iRet=0;
    cout<<"Enter number:";
    cin>>ino;

    cout<<"enter position:";
    cin>>i;
     iRet= ToggleBit(ino,i);
     cout<<"modified number:"<<iRet;
     return 0;
}