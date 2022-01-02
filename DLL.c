#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node*next;
    struct node*prev;
}NODE,*PNODE,**PPNODE;

void Display(PNODE Head)
{
    while(Head!=NULL)
    {
        printf("|%d|->",Head->data);
        Head=Head->next;
    }
    printf("NULL\n");
}

int Count(PNODE Head)
{
    int icnt=0;
    while(Head!=NULL)
    {
        icnt++;
        Head=Head->next;
    }
}

void InsertFirst(PPNODE Head,int no)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;

    if(*Head==NULL)
    {
        *Head=newn;
    }
    else
    {
        newn->next=*Head;
        (*Head)->prev=NULL;
        *Head=newn;
    }
}

void InsertLast(PPNODE Head,int no)
{
    PNODE temp=*Head;
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;
    if(*Head==NULL)
    {
        *Head=newn;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
        newn->prev=temp;
    }
}
void DeleteFirst(PPNODE Head)
{
    if(*Head==NULL)
    {
        return;
    }
    else if((*Head)->next==NULL)
    {
        free(*Head);
        *Head=NULL;
    }
    else
    {
        *Head=(*Head)->next;
        free((*Head)->prev);
        (*Head)->prev=NULL;
    }
}

void DeleteLast(PPNODE Head)
{
    PNODE temp=*Head;
    if(*Head==NULL)
    {
        return;
    }
    else if((*Head)->next==NULL)
    {
        free(*Head);
        *Head=NULL;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->prev->next=NULL;
        free(temp);
    }
}

void InsertAtPos(PPNODE Head ,int no,int Pos)
{
    int size=0;
    PNODE temp=*Head;
    PNODE newn=NULL;
    int i=0;
    size=Count(*Head);
    if((Pos<1)||(Pos>size+1))
    {
        printf("Enter valid position\n");
    }
    if(Pos==1)
    {
        InsertFirst(Head,no);
    }
    else if(Pos==size+1)
    {
        InsertLast(Head,no);
    }

    else
    {
        newn=(PNODE)malloc(sizeof(NODE));
        newn->data=no;
        newn->next=NULL;
        newn->prev=NULL;
        for(i=1;i<Pos-1;i++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next->prev=newn;
        temp->next=newn;
        newn->prev=temp;
    }
}

void DeleteAtPos(PPNODE Haed,int Pos)
{
    PNODE temp=*Haed;
    int size=Count(*Haed);
    int i=0;
    if((Pos<1)||(Pos>size))
    {
        printf("Enter valid");
        return;
    }
    if(Pos==1)
    {
        DeleteFirst(Haed);
    }
    else if(Pos==size)
    {
        DeleteLast(Haed);
    }
    else
    {
        for(i=1;i<Pos-1;i++)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;
        free(temp->next->prev);
        temp->next->prev=temp;
    }


}

int main()
{
    PNODE first=NULL;
    int Choice=1;
    int value=1,Pos=0,iRet=0;
    while(Choice!=0)
    {
        printf("\n------------------------------------------------\n");
        printf("Enter desired operation you want perform in DLL:\n");
        printf("1:Insert First:\n");
        printf("2:Insert Last\n");
        printf("3:Insert At Position\n");
        printf("4:Delete First\n");
        printf("5:Delete Last\n");
        printf("6:Delete At Position\n");
        printf("7:Display DLL\n");
        printf("8:Count element DLL\n");
        printf("0:Thank You!!!!!!!!!\n");
        printf("--------------------------------------------------\n");
        scanf("%d",&Choice);
        printf("----------------------------------------------------\n");

        switch(Choice)
        {
            case 1:
            printf("Enter Data\n");
            scanf("%d",&value);
            InsertFirst(&first,value);
            break;

            case 2:
            printf("Enter Data\n");
            scanf("%d",&value);
            InsertLast(&first,value);
            break;
            
            case 3:
            printf("Enter Data\n");
            scanf("%d",&value);
            printf("Enter Position\n");
            scanf("%d",&Pos);
            InsertAtPos(&first,value,Pos);
            break;

            case 4:
            DeleteFirst(&first);
            break;

            case 5:
            DeleteLast(&first);
            break;

            case 6:
            printf("Enter Position\n");
            scanf("%d",&Pos);
            DeleteAtPos(&first,Pos);
            break;

            case 7:
            Display(first);
            break;

            case 8:
            iRet=Count(first);
            printf("Count Are:%d\n",iRet);
            break;

            case 0:
            printf("!!! Thank You !!!\n");
            break;

            default:
            printf("Enter valid choice\n");
            break;
        }
    }
    return 0;
}