#include<iostream>
using namespace std;
typedef struct node
{
    int data;
    struct node*lchild;
    struct node*rchild;
}NODE,*PNODE,**PPNODE;
void Insert(PPNODE Head,int no)
{
    PNODE temp=*Head;
    PNODE newn=new NODE;

    newn->data=no;
    newn->lchild=NULL;
    newn->rchild=NULL;
    
    if(*Head==NULL)
    {
        *Head=newn;
    }
    else
    {
         while(1)
         {
            if(temp->data==no)
            {
                cout<<"Duplicate\n";
                delete newn;
                break;
            }
            else if(no<(temp->data))
            {
                if(temp->lchild==NULL)
                {
                    temp->lchild=newn;
                    break;
                }
                temp=temp->lchild;
            }
            else if(no>(temp->data))
            {
                if(temp->rchild==NULL)
                {
                    temp->rchild=newn;
                    break;
                }
                temp=temp->rchild;
            }
         }
    }
}
bool Search(PNODE Head,int no)
{
    if(Head==NULL)
    {
        return false;
    }
    else
    {
        while(Head!=NULL)
        {
            if(Head->data==no)
            {
                break;
            }
            else if(no<(Head->data))
            {
                Head=Head->lchild;
            }
            else if(no>(Head->data))
            {
                Head=Head->rchild;
            }
        }
        if(Head==NULL)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}
void Display(PNODE Head)
{
    if(Head!=NULL)
    {
        cout<<Head->data<<"\t";
        Display(Head->lchild);
        Display(Head->rchild);
    }
}

int Count(PNODE Head)
{
   static int icnt=0;
    if(Head!=NULL)
    {
        icnt++;
        Count(Head->lchild);
        Count(Head->rchild);
    }
    return icnt;
}

int LeafCount(PNODE Head)
{
    static int icnt=0;
    if(Head!=NULL)
    {
        if(Head->lchild==NULL&&Head->rchild==NULL)
        {
            icnt++;
        }
        LeafCount(Head->lchild);
        LeafCount(Head->rchild);
    }
    return icnt;
}
int main()
{
    PNODE first=NULL;
    int iRet=0;
    bool bRet=false;
    Insert(&first,51);
    Insert(&first,21);
    Insert(&first,103);
    Insert(&first,37);
    Insert(&first,40);
    Insert(&first,104);
    bRet=Search(first,51);
    if(bRet==true)
    {
        cout<<"number is their:\n";
    }
    else
    {
        cout<<"Number is not their\n";
    }
    Display(first);
    iRet=LeafCount(first);
    cout<<"Count are<"<<iRet<<"\n";
    return 0;
}