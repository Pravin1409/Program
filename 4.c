#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
struct node
{
int Data;
struct node *Next;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;
void InsertFirst(PPNODE Head , int no )
{
PNODE newn = NULL;
newn = (PNODE)malloc(sizeof(NODE));
newn->Next = NULL;
newn->Data = no;
if (*Head == NULL)
{
*Head = newn;
}
else
{
newn -> Next = *Head;
*Head = newn;
}
}

void Display(PNODE Head)
{
    while (Head!=NULL)
    {
        printf("%d\t",Head->Data);
        Head=Head->Next;
    }
    
}
int Max(PNODE Head)
{
    int i=1;
    int max=0;
    while(Head!=NULL)
    {
        if(Head->Data>max)
        {
            max=Head->Data;
        }
        i++;
       Head=Head->Next;
    }
     return max;
}
int main()
{
PNODE First = NULL;
int iRet=0;
InsertFirst(&First, 240);
InsertFirst(&First, 320);
InsertFirst(&First, 230);
InsertFirst(&First, 110);

// Call all functions for below problem statements.
Display(First);
iRet=Max(First);
printf("Maximum are:%d",iRet);
return 0;
}