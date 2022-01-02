#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node* next;
}NODE,*PNODE,**PPNODE;

void Display(PNODE Head,PNODE Tail)
{
    if((Head==NULL)&&(Tail==NULL))
    {
        return;
    }
    do 
    {
        printf("|%d|->",Head->data);
        Head=Head->next;
    }while(Head!=Tail->next);
}

int Count(PNODE Head,PNODE Tail)
{
    int icnt=0;
    if((Head==NULL)&&(Tail==NULL))
    {
        return;
    }
    do 
    {
        icnt++;
        Head=Head->next;
    }while (Head!=Tail->next);
    return icnt;
}

void InsertFirst(PPNODE Head,PPNODE Tail,int no)
{
    PNODE newn=NULL;
    newn->data=no;
    newn->next=NULL;
    if(*Head==NULL&&*Tail==NULL)
    {
        *Head=newn;
        *Tail=newn;
    }
    else
    {
        newn->next=*Head;
        *Head=newn;
        (*Tail)->next=newn;
    }
    
}
int main()
{
    PNODE first=NULL;
    PNODE last=NULL;
    Display(first,last);

    return 0;
}