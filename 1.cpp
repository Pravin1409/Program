#include<iostream>
using namespace std;
typedef unsigned int UINT;
UINT CountOne(UINT iNo)
{
    UINT icnt=0,i=0;
    UINT iMask=0x00000001;
    UINT iResult=0;
  
    for(i=1;i<iNo;i++)
    {
        iResult=iNo&iMask;
        if(iResult!=0)
        {
            icnt++;
        }
        iMask=iMask<<1;
    }
    return icnt;
}
int main()
{
    UINT ino=0,iRet=0;
    cout<<"Enter number:";
    cin>>ino;
    
    iRet=CountOne(ino);
    cout<<"Count Are:"<<iRet<<"\n";

    return 0;
}