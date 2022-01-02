#include<stdio.h>
void Display(char str[])
{
    int i=0;
    while (str[i]!='\0')
    {
        if ((str[i]>='0')&&(str[i]<='9'))
        {
            printf("%c",str[i]);
        }
        i++;
    }
    
}
int main()
{
    char Arr[30];
    printf("Enter string:");
    scanf("%[^\n]s",Arr);
    Display(Arr);

    return 0;
}