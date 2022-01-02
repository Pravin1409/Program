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
int SearchFirst(PNODE Head,int no)
{
    int i=1;
    while(Head!=NULL)
    {
        if(Head->Data==no)
        {
            break;
        }
        i++;
       Head=Head->Next;
    }
     return i;
}
int main()
{
PNODE First = NULL;
int iRet=0;
InsertFirst(&First, 70);
InsertFirst(&First, 30);
InsertFirst(&First, 50);
InsertFirst(&First, 40);
InsertFirst(&First, 30);
InsertFirst(&First, 20);
InsertFirst(&First, 10);
// Call all functions for below problem statements.
Display(First);
iRet=SearchFirst(First,30);
printf("position are:%d\n",iRet);
return 0;
}