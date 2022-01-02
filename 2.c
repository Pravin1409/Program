#include<stdio.h>
void Display(char c)
{
    if ((c>='a')&&(c<='z'))
    {
        printf("%c\n",c-32);
    }
    
    else if((c>='A')&&(c<='Z'))
    {
        printf("%c\n",c+32);
    }
    else
    {
        if (c==c)
        {
            printf("%c\n",c);
        }
        
    }
    
}
int main()
{
    char ch='\0';
    printf("Enter character:");
    scanf("%c",&ch);
    Display(ch);
    return 0;
}
