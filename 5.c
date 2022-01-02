#include<stdio.h>
int CountSpace(char*str)
{
    int i=0;
    while (*str!='\0')
    {
        if (*str==' ')
        {
            i++;
        }
        str++;
    }
    return i;
}
int main()
{
    char str[30];
    int iRet=0;
    printf("Enter char:");
    scanf("%[^\n]s",str);
    iRet=CountSpace(str);
    printf("Count is:%d",iRet);

    return 0;
}