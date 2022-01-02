#include<iostream>
using namespace std;
typedef unsigned int UINT;
UINT ToggleOnrange(UINT iNo,UINT iStart,UINT iEnd)
{
    UINT imask1=0xFFFFFFFF;
    UINT imask2=0xFFFFFFFF;
    UINT imask=0;
    UINT iResult=0;
    imask1=imask1<<(iStart-1);
    imask2=imask2>>(32-iEnd);
    imask=imask1&imask2;
    iResult=imask1|imask2;
    return iResult;
}
int main()
{
    UINT ino=0;
    UINT istart=0,iend=0;
    UINT iRet=0;
    cout<<"Enter number:";
    cin>>ino;

    cout<<"Enter start:";
    cin>>istart;

    cout<<"Enter end";
    cin>>iend;

    iRet=ToggleOnrange(ino,istart,iend);
    cout<<"modified number are:"<<iRet;
    return 0;
}