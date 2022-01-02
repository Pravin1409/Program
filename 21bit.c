#include<stdio.h>
#include<stdbool.h>
bool Check(int ino)
{
    int mask=0x00100000;
    int result=0;
    result=ino&mask;
    if(result==mask)
    {
        return true;
    }
    else{
        return false;
    }

}
int main()
{
    int ino=0;
    bool bRet=false;
    printf("Enter number:");
    scanf("%d",&ino);

    bRet=Check(ino);
    if(bRet==true)
    {
        printf("21 bit on");
    }
    else{
        printf("21 bit of");
    }
}