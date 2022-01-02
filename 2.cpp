#include<iostream>
using namespace std;
typedef unsigned int UINT;
 void Display(UINT ino1,UINT ino2)
 {
     UINT iMask1=ino1&0x00000001;
     UINT iMask2=ino2&0x00000001;
     UINT iResult=0;
    
    UINT i=0;
     
     for(i=1;i<ino1;i++)
     {
         iResult=iMask1^iMask2;
         if(iResult!=0)
         {
             cout<<iResult;
         }
    
     }
    
 }
int main()
{
    UINT ino1=0,ino2=0;
    cout<<"Enter number 1:";
    cin>>ino1;

     cout<<"Enter number 2:";
     cin>>ino2;

    Display(ino1,ino2);
    return 0;
}
