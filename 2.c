#include<stdio.h>
#include<stdbool.h>
bool CheckCapital(char c)
{
    if ((c>='A')&&(c<='Z'))
    {
     return true;
    }
    else{
        return false;
    }
}
int main()
{ char ch='\0';
bool bRet=false;

printf("Enter the character: ");
scanf("%c",&ch);
bRet= CheckCapital(ch);
if(bRet==true)
{
    printf("Charcter is capital");
}
else
{
    printf("Character not capital ");
}
    return 0;
}