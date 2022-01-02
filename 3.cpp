#include<iostream>
using namespace std;
typedef unsigned int UINT;
UINT OffBit(UINT iNo)
{
    UINT iMask=0xFFFFFDBF;
    UINT iResult=0;
    iResult=iNo&iMask;
    return iResult;
}
int main()
{
    UINT ino=0,iRet=0;
    cout<<"Enter number:\n";
    cin>>ino;
    iRet=OffBit(ino);

    cout<<"modified number are: "<<iRet<<"\n";

    
}
