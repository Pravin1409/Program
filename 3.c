#include<stdio.h>
int Count(char*str)
{
    static int icnt=0;
    if(*str!='\0')
    {
        if((*str>='a')&&(*str<='z'))
        {
            icnt++;
        }
        str++;
        Count(str);
    }
    return icnt;
}
int main()
{
    char Arr[30];
    int iRet=0;
    printf("Enter the string\n");
    scanf("%[^\n]s",Arr);
    iRet=Count(Arr);
    printf("Count of small char is:%d",iRet);
    return 0;
}