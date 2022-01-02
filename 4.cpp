#include<iostream>
#include<stdbool.h>
using namespace std;
typedef unsigned int UINT;
bool ChkBit(UINT iNo,UINT iPos1,UINT iPos2)
{
    UINT imask1=0x00000001;
    UINT imask2=0x00000001;
    UINT imask=0;
    UINT iResult=0;
    imask1=imask1<<(iPos1-1);
    imask2=imask2<<(iPos2-1);
    imask=imask1|imask2;
    iResult=iNo&imask;
    if(iResult==imask)
    {
        return true;
    }
    else
    {
        return false;
    }

}
int main()
{
    UINT ino=0,i=0,j=0;
    bool bRet=false;
    cout<<"Enter number:";
    cin>>ino;

    cout<<"Enter 1st position";
    cin>>i;

    cout<<"enter 2nd position";
    cin>>j;
    bRet=ChkBit(ino,i,j);
    if(bRet==true)
    {
        cout<<"bit on";
    }
    else
    {
        cout<<"bit off";
    }
    return 0;
}