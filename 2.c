#include<stdio.h>
int CountSmall(char *str)
{
    int icnt=0;
 while (*str!='\0')
 {
     if ((*str>='a')&&(*str<='z'))
     {
         icnt++;
     }
     str++;
     
 }
 return icnt;
}
int main()
{
    char Str[50];
    int iRet=0;
    printf("Enter String: ");
    scanf("%[^\n]s",Str);
    iRet=CountSmall(Str);
    printf("Count is: %d",iRet);
    return 0;
}