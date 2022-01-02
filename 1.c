#include<stdio.h>
void strcpyx(char *src,char *dest)
{
    while (*src!='\0')
    {
        *dest=*src;
        src++;
        dest++;
    }
    dest;
}
int main()
{
    char Arr[30];
    char brr[30];
    printf("Enter string 1: \n");
    scanf("%[^\n]s",Arr);
    strcpyx(Arr,brr);

    printf(" the copy string are:%s\n",brr);
    return 0;
}