#include<stdio.h>
#include<stdbool.h>
bool CheckSmall(char c)
{
    if ((c>='a')&&(c<='z'))
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
    bool bret=false;
    printf("Enter character: ");
    scanf("%c",&ch);
    bret=CheckSmall(ch);
    if (bret==true)
    {
        printf("It is small");
    }
    else
    {
        printf("it not small");
    }
    
}