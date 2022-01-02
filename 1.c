// convert lower case
#include<stdio.h>
void strlwrx(char *str)
{
    int i=0;
    while (*str!='\0')
    {
        if ((*str>='A')&&(*str<='Z'))
        {
            *str=*str+32;
        }
        str++;
    }
    
}
int main()
{
    char arr[30];
 
    printf("Enter string:");
    scanf("%[^\n]s",arr);

    strlwrx(arr);

    printf("modified string aree:%s",arr);

    return 0;
}