#include<stdio.h>
void Display(char*str,char*dest,int icnt)
{
    while ((*str!='\0')&&(icnt!=0))
    {
        *dest=*str;
        str++;
        dest++;
        icnt--;
    }
    dest;
}
int main()
{
    char Arr[50];
    char Brr[30];
    printf("Enter string: ");
    scanf("%[^\'n']s",Arr);
    Display(Arr,Brr,2);
    printf("string are:%s\n",Brr);
    return 0;
}


