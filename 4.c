#include<stdio.h>
void Display(char*arr,char *brr)
{
    while (*arr!='\0')
    {
        if (*arr>='a'&&*arr<='z')
        {
            *brr=*arr;
             arr++;
        }
      
        brr++;
        
    }
    brr;
    
}
int main()
{
    char Arr[30];
    char Brr[30];
    printf("Enter the string:");
    scanf("%[^\n]",Arr);

    Display(Arr,Brr);

    // printf("String:%s",Brr);
    return 0;
}