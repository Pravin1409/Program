/*
Accept number and two position from user and toggle the bit.
*/
#include<iostream>
using namespace std;
typedef unsigned int UINT;
UINT ToggleBit(UINT iNo,UINT Pos1,UINT Pos2)
{
    UINT mask1=0x00000001;
    UINT mask2=0x00000001;
    UINT mask=0;
    UINT iResult=0;

    mask1=mask1<<(Pos1-1);
    mask2=mask2<<(Pos2-1);

    mask=mask1|mask2;
    
    iResult=iNo^mask;
    return iResult;

}
int main()
{
    UINT ino=0,i=0,j=0,iRet=0;
    cout<<"Enter number:";
    cin>>ino;

    cout<<"Enter 1st position:";
    cin>>i;

    cout<<"Enter 2nd position:";
    cin>>j;

    iRet=ToggleBit(ino,i,j);
    cout<<"modified number are:"<<iRet;
    return 0;
}