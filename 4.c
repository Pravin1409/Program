#include<stdio.h>
void Display(char*src,char*dest)
{
    while(*src!='\0')
    {
        *dest=*src;
        if ((*dest>='A')&&(*dest<='Z'))
        {
            *dest=*dest+32;
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

    printf("Enter the the string:");
    scanf("%[^\n]s",Arr);
     printf("Before :%s\n",Arr);
    Display(Arr,Brr);
   printf("After:%s",Brr);
   return 0;
}