#include<stdio.h>
void Dis(char*str)
{
    char *end=str;
    char temp;
    while (*end!='\0')
    {
        end++;
    }
    end--;
    while (str<end)
    {
        temp=*str;
        *str=*end;
        *end=temp;
        str++;
        end--;
    }
    
}

int main()
{
    char Arr[30];
    printf("Enter string:");
    scanf("%[^\n]s",Arr);

    Dis(Arr);
    printf("string are:%s",Arr);
    return 0;
}
