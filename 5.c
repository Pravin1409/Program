#include<stdio.h>
void Display(char*Arr,char*Brr)
{
    while (*Arr!='\0')
    {
        *Brr=*Arr;
        if ((*Brr>='A')&&(*Brr<='Z'))
        {
            *Brr=*Brr+32;
        }
        else if ((*Brr>='a')&&(*Brr<='z'))
        {
            *Brr=*Brr-32;
        }
        
        Arr++;
        Brr++;
    }
    Brr;
}
int main()
{
    char Arr[30];
    char Brr[30];

    printf("Enter String:");
    scanf("%[^\n]s",Arr);

    Display(Arr,Brr);
    printf("String are:%s",Brr);
    return 0;
}