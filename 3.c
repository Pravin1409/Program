#include<stdio.h>
int Count(char*str)
{
   static int icnt=0;
    if(*str!='\0')
    {
        icnt++;
        str++;
        Count(str);
    }
    return icnt;
}
int main()
{
    char Arr[20];
    int iRet=0;
    printf("Enter String:\n");
    scanf("%[^\n]s",Arr);
    iRet=Count(Arr);
    printf("Count are:%d",iRet);
    return 0;
}