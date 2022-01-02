#include<stdio.h>
void DisplayFactor( int ivalue)
{
    int i=0;
    
    if(ivalue<0)
    {
  
    }
    for(i=1;i<=ivalue/2;i++)
    {  
        if(ivalue%i==0)
        {
            printf("%d\n",i);
        
        }
    }
}

int main()
{
    int ino=0;
    printf("enter the number ");
    scanf("%d",&ino);
    DisplayFactor(ino);


    return  0;
}