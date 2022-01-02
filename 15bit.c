#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
bool check(UINT ino)
{
    UINT mask=0x00004000;
    UINT Result=0;
    Result=ino&mask;
    if(Result==mask)
    {
        return true;
    }
    {
        return false;
    }
}
int main()
{
   UINT ino=0; 
   bool bRet=0;
   printf("Enter number:");
   scanf("%d",&ino);

   bRet=check(ino);
   if(bRet==true)
   {
       printf("bs are on");
   }
   else
   {
       printf("bits are off");
   }
    return 0;
}