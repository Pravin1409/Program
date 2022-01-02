#include<iostream>
using namespace std;
typedef unsigned int UINT;
UINT OnBit(UINT iNo)
{
    UINT imask=0x0000000F;
    UINT iResult=0;
    iResult=iNo|imask;
    return iResult;
}
int main()
{
    UINT ino=0,iRet=0;
    cout<<"Enter number:\n";
    cin>>ino;

    iRet=OnBit(ino);

    cout<<"modified number are:"<<iRet<<"\n";

}