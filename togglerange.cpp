/*
Accept number AND range from user and toggle bit in between range. 
*/
#include<iostream>
using namespace std;
typedef unsigned int UINT;
UINT ToggleRange(UINT iNo,UINT iStart,UINT iEnd)
{
    UINT imask1=0xFFFFFFFF;
    UINT imask2=0xFFFFFFFF;
    UINT imask=0;
    UINT iResult=0;
    imask1=imask1<<(iStart-1);
    imask2=imask2>>(32-iEnd);
    imask=imask1&imask2;
    iResult=iNo^imask;
    return iResult;
}
int main()
{
    UINT ino=0,istart=0,iend=0,iRet=0;
    cout<<"enter number: ";
    cin>>ino;

    cout<<"Enter start point:";
    cin>>istart;

    cout<<"enter end point:";
    cin>>iend;

    iRet=ToggleRange(ino,istart,iend);
    cout<<"modified number are:"<<iRet;



    return 0;
}