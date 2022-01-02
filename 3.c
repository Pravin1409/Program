#include<stdio.h>
void Display(char str[])
{
    int i=0;
    while (str[i]!='\0')
    {
        if ((str[i]>='A')&&(str[i]<='Z'))
        {
            str[i]=str[i]+32;
        }
         else if ((str[i]>='a')&&(str[i]<='z'))
         {
             str[i]=str[i]-32;
         }
         
        i++;
    }
    
}
int main()
{
    char Arr[30];
    printf("Enter string: ");
    scanf("%[^\n]s",Arr);

    Display(Arr);
    printf("String are:%s",Arr);
    return 0;
}