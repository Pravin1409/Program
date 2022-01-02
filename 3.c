#include<stdio.h>
int Difference(char *Str)
{
    int icnt=0;
    int pcnt=0;

    while (*Str!='\0')
    {
        if ((*Str>='A')&&(*Str<='Z'))
        {
           icnt++;
        }
        if ((*Str>='a')&&(*Str<='z'))
        {
            pcnt++;
        }
        Str++;
        
    }
    return pcnt-icnt;
    
}
int main()
{
    char str[50];
    int iRet=0;
    printf("Enter the string: ");
    scanf("%[^\n]s",str);

    iRet=Difference(str);
    printf("Differnce is:%d",iRet);

    return 0;
}