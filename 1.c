#include<stdio.h>

int CountSpace(char*str)
{
   static int icnt=0;
    if(*str!='\0')
    {
        if(*str==' ')
        {
            icnt++;
        }
        str++;
        CountSpace(str);
    }
    return icnt;
}
int main()
{
    char Arr[20];
    int iRet=0;
    printf("Enter string: ");
    scanf("%[^\n]s",Arr);

    iRet=CountSpace(Arr);
    printf("Count of white space are:%d",iRet);
    return 0;
}