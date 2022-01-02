#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
bool check(UINT ino)
{
    UINT mask=0x0000000f;
    UINT result=0;

    result=ino&mask;
    if (result==ino)
    {
        return true;
    }
    else{
        return false;
    }
    

}
int main()
{
    UINT ino=0;
    bool bRet=false;
    printf("Enter number:");
    scanf("%d",&ino);
    bRet=check((ino));
    if(bRet==true)
    {
        printf("bits aree on");
    }

    else
    {
        printf("bits are of");
    }

    return 0;
}