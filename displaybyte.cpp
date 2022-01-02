#include<iostream>
using namespace std;
typedef unsigned int UINT;
void Display(UINT iNo)
{
    UINT Byte1=iNo&0x000000FF;

    UINT Byte2=iNo&0x0000FF00;
    Byte2=Byte2>>8;
    UINT Byte3=iNo&0x00FF0000;
    Byte3=Byte3>>16;
    UINT Byte4=iNo&0xFF000000;
    Byte4=Byte4>>24;
    cout<<"Byte 1:"<<Byte1<<"\n";
    cout<<"Byte 2:"<<Byte2<<"\n";
    cout<<"Byte 3:"<<Byte3<<"\n";
    cout<<"Byte 4:"<<Byte4<<"\n";
}
int main()
{
    UINT ino=0;
    cout<<"Enter number:";
    cin>>ino;
    Display(ino);
    return 0;
}