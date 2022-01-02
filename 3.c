#include<stdio.h>
void Display(char*src,char*dest)
{
    while(*src!='\0')
    {
        *dest=*src;
        if ((*src>='a')&&(*src<='z'))
        {
            *dest=*dest-32;   
        }
       
         src++;
        dest++;
    }
    dest;
}
int main()
{
    char Arr[30];
    char Brr[30];
    printf("Enter String:");
    scanf("%[^\n]s",Arr);

    printf("Before:%s\n",Arr);
    Display(Arr,Brr);
    printf("After:%s",Brr);
    return 0;
}