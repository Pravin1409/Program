#include<iostream>
using namespace std;
typedef unsigned int UINT;
UINT ToggleRange(UINT iNo,UINT iStart,UINT iEnd)
{
    UINT Mask1=0xFFFFFFFF;
    Mask1=Mask1<<(iStart-1);
    UINT Mask2=0xFFFFFFFF;
    Mask2=Mask2>>(32-iEnd);
    UINT mask=0;
    UINT iResult=0;
    mask=Mask1&Mask2;
    iResult=iNo^mask;
    return iResult;
}
int main()
{
    UINT ino=0,istart=0,iend=0,iRet=0;

    cout<<"Enter number:";
    cin>>ino;

    cout<<"Enter start:";
    cin>>istart;

    cout<<"enter end:";
    cin>>iend;

    iRet=ToggleRange(ino,istart,iend);

    cout<<" number are:"<<iRet;
    return 0;
}