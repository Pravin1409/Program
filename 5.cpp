#include<iostream>
using namespace std;
typedef unsigned int UINT;
UINT ToggleNibble(UINT iNo)
{
    UINT iMask=0xF000000F;
    UINT iResulte=0;

    iResulte=iNo^iMask;
    return iResulte;

}
int main()
{
    UINT ino=0,iRet=0;
    cout<<"Enter number:";
    cin>>ino;

    iRet= ToggleNibble(ino);
    cout<<"modified number are:"<<iRet<<"\n";

    return 0;
}