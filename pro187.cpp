#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

using namespace std;
class MarvellousFile
{
    char Fname[20];
    int fd=0;
    public:
    MarvellousFile(char*Name)
    {
       strcpy(Fname,Name);
       fd=open(Fname,O_RDWR);
    }
    void Display()
    {
        int iRet=0;
        char Buffer[10];
        lseek(fd,0,0);
        while ((iRet=read(fd,Buffer,sizeof(Buffer)))!=0)
        {
            write(1,Buffer,iRet);
        }
        cout<<"\n";
    }
    
    int CountCapital()
    {
        int iRet=0,icnt=0,i=0;
        char Buffer[30];
        lseek(fd,0,0);
        while((iRet=read(fd,Buffer,30))!=0)
        {
            for(i=0;i<iRet;i++)
            {
                if(Buffer[i]>='A'&&Buffer[i]<='Z')
                {
                    icnt++;
                }
            }
        }
        return icnt;
    }
int CountSmall()
    {
        int iRet=0,  icnt=0, i=0;
        char Buffer[1024];
        lseek(fd,0,0);
        while((iRet=read(fd,Buffer,sizeof(Buffer)))!=0)
        {
            for(i=0; i<iRet; i++)
            {
                if(Buffer[i]>='a'&&Buffer[i]<='z')
                {
                    icnt++;
                }
            }
        }
        return icnt;
    }

    
    int CountDigit()
    {
        int iRet=0,icnt=0,i=0;
        char Buffer[1024];
        lseek(fd,0,0);
        while((iRet=read(fd,Buffer,sizeof(Buffer)))!=0)
        {
            for(i=0;i<iRet;i++)
            {
                if(Buffer[i]>='0'&&Buffer[i]<='9')
                {
                    icnt++;
                }
            }
        }
        return icnt;
    }

    int Filesize()
    {
        int isum=0,iRet=0;
        char Buffer[1024];
        lseek(fd,0,0);
        while((iRet=read(fd,Buffer,sizeof(Buffer)))!=0)
        {
            isum=isum+iRet;
        }
        return isum;
    }
  
};
int main()
{
    int iRet=0;
    char Fname[30];

    cout<< "Enter the file name"<<"\n";
    cin>>Fname;
    MarvellousFile mobj(Fname);
    mobj.Display();

    iRet=mobj.CountCapital();
    cout<<"Count of Capital are:"<<iRet<<"\n";
    
    iRet=mobj.CountSmall();
    cout<<"Count Are:"<<iRet<<"\n";

    iRet=mobj.CountDigit();
    cout<<"count of Digit Are:"<<iRet<<"\n";

    iRet=mobj.Filesize();
    cout<<"Size of file are :"<<iRet<<"Bytes"<<"\n";
   

    return 0;
}
