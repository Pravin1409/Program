#include<stdio.h>
void Display(int ivalue)
{
int icnt=0;


for (icnt=ivalue;icnt>=1;icnt--)        // input 12  ,3
{                                    //output 12  12  12
    printf("%d\n",icnt);
    
}
}



int main()
{
 int ino=0;
//  int icount=3;
 printf("enter the number=");
 scanf("%d",&ino);


//  printf("enter frequency");
//  scanf("%d",&icount);


 Display(ino);
 return 0;
}