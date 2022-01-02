#include<stdio.h>
#include<stdbool.h>
bool CheckVowel(char *str)
{
    while (*str!='\0')
    {
        if (*str=='a'||*str=='e'||*str=='i'||*str=='o'||*str=='u')
     {
        return true;
     }
     else
     {
         return false;
     }
      str++;
    }
}
int main()
{
    char str[50];
    bool bRet=false;
    printf("Enter the String: ");
    scanf("%[^\n]s",str);
    bRet=CheckVowel(str);
    if (bRet==true)
    {
        printf("Contain vowel");
    }
    else
    {
        printf("Not Contain");
    }
    
    return 0;
}