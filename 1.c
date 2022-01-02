#include<stdio.h>
void Display(char *str,char*dest)
{
    char*start=str;
    char*end=dest;
    char temp;
    while (*end!='\0')
    {
        end++;
    }
    end--;
    while (start<end)
    {
        temp=*start;
        *start=*end;
        *end=temp;
         start++;
        end--;

        *dest=temp;
        dest--;
        
    }
dest;
}
int main()
{
    char Arr[30];
    char Brr[30];

    printf("Enter srting:");
    scanf("%[^'\n']s",Arr);
    scanf("%[^\n]s",Brr);
    Display(Arr,Brr);
    printf("string are:%s",Brr);
    return 0;
}