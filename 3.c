#include<stdio.h>
void StrcpyCap(char *src,char*dest)
{
    while (*src!='\0')
    {
        if ((*src>='A')&&(*src<='Z'))
        {
            *dest=*src;
            src++;
        }
        dest++;
    }
    dest;
}
int main()
{
    char arr[30];
    char brr[30];
    printf("Enter source string:");
    scanf("%[^\n]s",arr);
    StrcpyCap(arr,brr);

    printf("Result :%s",brr);
    return 0;
}