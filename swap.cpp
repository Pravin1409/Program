#include<iostream>
using namespace std;
typedef unsigned int UINT;
UINT swap(UINT ino)
{
    UINT iMask=0x00FFFF00;
    UINT iTemp=ino&0x00FFFF00;
    UINT Byte1=ino<<24;
    UINT Byte4=ino>>24;
    UINT iResult= iTemp|Byte1|Byte4;
    return iResult;
    
}
int main()
{
    UINT ino=0,iRet=0;
    cout<<"Enter number :";
    cin>>ino;

    iRet=swap(ino);
    cout<<"data are:"<<iRet;


    return 0;
}