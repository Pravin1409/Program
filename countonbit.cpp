/*
write a progarm aceepet numbr from usre and count ON bit number.
*/
#include<iostream>
using namespace std;
typedef unsigned int UINT;
UINT CountOn(UINT iNo)
{
    UINT imask=0x00000001;
    UINT iResult=0,i=0,icnt=0;
    for(i=1;i<=iNo;i++)
    {
        iResult=iNo&imask;
        if(iResult!=0)
        {
            icnt++;
        }
        imask=imask<<1;
    }
return icnt;
}
int main()
{
    UINT ino=0,iRet=0;
    cout<<"Enter number:";
    cin>>ino;

    iRet=CountOn(ino);
    cout<<"Count Are:"<<iRet;
    return 0;
}