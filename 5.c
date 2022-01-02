#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL ChkVowel(char cd)
{
 if((cd=='a')||(cd=='e')||(cd=='i')||(cd=='o')||(cd=='u'))
 {
     return TRUE;
 }
 else
 {
     return FALSE;
 }


}



int main()
{
  char cValue='\0';
  BOOL bRet=FALSE;
  printf("enter the character\n");
  scanf("%c",&cValue);

  bRet=ChkVowel(cValue);
  if(bRet==TRUE)
  {
      printf("It is vowel");
  }
  else
  {
      printf("it is not vowel");
  }

    return 0;
}