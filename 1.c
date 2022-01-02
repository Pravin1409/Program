#include<stdio.h>
int Count(char*Brr)
{
    int i=0;
    while (*Brr!='\0')
    {
        if ((*Brr>='A')&&(*Brr<='Z'))
        {
          i++;
        }
        Brr++;
    }
    return i;
    
}
int main()
{
    char Arr[50];
    int iRet=0;
    printf("Enter String:");
    scanf("%[^'\n']s",Arr);
    iRet=Count(Arr);
    printf("Count are: %d",iRet);
    return 0;
}