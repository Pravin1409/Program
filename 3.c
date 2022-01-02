#include<stdio.h>
#include<stdbool.h>
bool Check(char c)
{
    if ((c>='0')&&(c<='9'))
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
    char ch='\0';
     bool bRet=false;
     printf("Enter char");
     scanf("%c",&ch);
     bRet=Check(ch);
     if (bRet==true)
     {
         printf("it is digit");
     }
     else
     {
         printf("it is not digit");
     }
     
    return 0;
}