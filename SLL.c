#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}NODE,*PNODE,**PPNODE;

void Display(PNODE Head)
{
    PNODE temp=Head;
    while(temp!=NULL)
    {
        printf("|%d|->",temp->data);
        temp=temp->next;
    }
}

int Count(PNODE Head)
{
    int icnt=0;
    while(Head!=NULL)
    {
        icnt++;
        Head=Head->next;

    }
    return icnt;
}

void InsertFirst(PPNODE Head,int no)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;

    if(*Head==NULL)
    {
        *Head=newn;
    }
    else
    {
        newn->next=*Head;
        *Head=newn;
    }
}

void InsertLast(PPNODE Head ,int no)
{
    PNODE temp=*Head;
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;

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
    }
}

void DeleteFirst (PPNODE Head)
{
    PNODE temp=*Head;
    if(*Head!=NULL)
    {
        *Head=(*Head)->next;
        free(temp);
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
        while(temp->next->next!=NULL)
       {
          temp=temp->next;
        }
        free(temp->next);
        temp->next=NULL;
   }
}

void InsertAtPos(PPNODE Head,int no,int Pos)
{
    PNODE temp=*Head;
    PNODE newn=NULL;
    int size=Count(*Head);
    int i=0;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;
    if((Pos<1)||(Pos>size+1))
    {
        printf("Enter valid position");
        return;
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
        for(i=1;i<Pos-1;i++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next=newn;
    }
}

void DeleteAtPos(PPNODE Head ,int Pos)
{
    PNODE temp=*Head;
    PNODE targated=NULL;
    int size=0;
    int i=0;
    size=Count(*Head);
    if((Pos<1)||(Pos>size))
    {
        printf("Enter valid Position");
        return;
    }

    if(Pos==1)
    {
        DeleteFirst(Head);
    }
    else if(Pos==size)
    {
        DeleteLast(Head);
    }
    else
    {
        for(i=1;i<Pos-1;i++)
        {
            temp=temp->next;
        }
        targated=temp->next;
        temp->next=targated->next;
        free(targated);
    }
}
int main()
{
    PNODE first=NULL;
    int value=0,pos=0,iRet=0;
    int Choice=1;
    while(Choice!=0)
    {
        printf("\n----------------------------------------------------\n");
        printf("Enter desired operation which you want to perform on linked list");
        printf("1:Insert First\n");
        printf("2:Insert Last\n");
        printf("3:Insert At given position\n");
        printf("4:Delete first\n");
        printf("5:Delete Last\n");
        printf("6:Delete at given Position\n");
        printf("7:Display linked list\n");
        printf("8:count element on linkd list\n");
        printf("0:Thank You!!!!!!!!!!\n");
        printf("--------------------------------------------------------\n");
        scanf("%d",&Choice);

        switch(Choice)
        {
            case 1:
            printf("Enter data:\n");
            scanf("%d",&value);
            InsertFirst(&first,value);
            break;

            case 2:
            printf("Enter Data:\n");
            scanf("%d",&value);
            InsertLast(&first,value);
            break;

            case 3:
            printf("Enter data:\n");
            scanf("%d",&value);
            printf("Enter Position:\n");
            scanf("%d",&pos);
            InsertAtPos(&first,value,pos);
            break;

            case 4:
            DeleteFirst(&first);
            break;

            case 5:
            DeleteLast(&first);
            break;

            case 6:
            printf("Enter Position\n");
            scanf("%d",&pos);
            DeleteAtPos(&first,pos);
            break;

            case 7:
            Display(first);
            break;

            case 8:
            iRet=Count(first);
            printf("Count Are:%d",iRet);
            break;

            case 0:
            printf("Thank You!!!!!!!!!!!\n");
            break;

            default:
            printf("Enter valid choice\n");
            break;
        }
    }
    return 0;
}