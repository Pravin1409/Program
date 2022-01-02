#include<stdio.h>
void Display(char c)
{    
        if ((c>='A')&&(c<='Z'))
        {
            printf("%d\t %o\t%X\t\n",c,c,c);
        }
    
        
    
}
int main()
{
    char ch='\0';
    printf("Enter Char:");
    scanf("%c",&ch);

    Display(ch);
    return 0;
}