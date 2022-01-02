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
int Min(PNODE Head)
{
    int i=1;
    int min=Head;
    while(Head!=NULL)
    {
        if(Head->Data<min)
        {
            min=Head->Data;
        }
        i++;
       Head=Head->Next;
    }
     return min;
}
int main()
{
PNODE First = NULL;
int iRet=0;
InsertFirst(&First, 640);
InsertFirst(&First, 220);
InsertFirst(&First, 20);
InsertFirst(&First, 230);
InsertFirst(&First,110);

// Call all functions for below problem statements.
Display(First);
iRet=Min(First);
printf("Minimu are:%d",iRet);
return 0;
}