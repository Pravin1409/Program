#include<stdio.h>
#include<stdbool.h>
bool Check(char ch)
{
    while (ch!='\0')
    {
     if ((ch>='A')&&(ch<='Z')||(ch>='a')&&(ch<='z'))
     {
         return true;
     }
     else
     {
         return false;
     }
     
    }
    
}
int main()
{
    char ch='\0';
    bool bRet=false;
    printf("Enter the character:\n");
    scanf("%c",&ch);
    bRet=Check(ch);
    if (bRet==true)
    {
        printf("It is alphabet.");
    }
    else
    {
        printf("It is not alphabet");
    }
    return 0;
    
}