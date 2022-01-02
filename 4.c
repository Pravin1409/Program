#include<stdio.h>
#include<stdbool.h>
bool Check(char ch)
{
    int i=0;
    for(i=0;i<=127;i++)
    {
    if ((ch>=33)&&(ch<=42))
    {
        return true;
    }
    else
    {
        return false;
    }
    
}
}
int main()
{
    char ch='\0';
    bool bRet=false;
    printf("Enter character:");
    scanf("%c",&ch);
    bRet=Check(ch);
    if (bRet==true)
    {
     printf("it is symbol");
    }
    else
    {
        printf("It is not symbol");
    }
    return 0;

}