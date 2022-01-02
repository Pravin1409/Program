#include<iostream>
using namespace std;
typedef struct node
{
    int data;
    struct node*next;
    struct node*prev;
}NODE ,*PNODE;
class DoublyCL
{
    private:
    PNODE first;
    PNODE last;
    int size;
    public:
    DoublyCL()
    {
        first=NULL;
        last=NULL;
        size=0;
    }
    void InsertFirst(int);
    void InsertLast(int);
    void InsretAtPos(int ,int);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);
    void Display();
    int Count();
};
void DoublyCL::InsertFirst(int no)
{
    PNODE newn=new NODE;
    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;
    if((first==NULL)&&(last==NULL))
    {
        first=newn;
        last=newn;
    }
    else
    {
        newn->next=first;
        first->prev=newn;
        first=newn;
    }
    last->next=first;
    first->prev=last;
    size++;
}

void DoublyCL::InsertLast(int no)
{
    PNODE newn=new NODE;
    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;
    if((first==NULL)&&(last==NULL))
    {
        first=newn;
        last=newn;
    }
    else
    {
        last->next=newn;
        newn->prev=last;
        last=newn;
    }
    last->next=first;
    first->prev=last;
    size++;
}

void DoublyCL::DeleteFirst()
{
    if((first==NULL)&&(last==NULL))
    {
        return;
    }
    else if(first==last)
    {
        delete first;
        first=NULL;
        last=NULL;
    }
    else
    {
        PNODE temp=first;
        first=first->next;
        delete temp;
    }
    last->next=first;
    first->prev=last;
    size--;
}

void DoublyCL::DeleteLast()
{
    if((first==NULL)&&(last==NULL))
    {
        return ;
    }
    else if(first==last)
    {
        delete first;
        first=NULL;
        last=NULL;
    }
    else
    {
        delete last;
        last=last->prev;
    }
    last->next=first;
    first->prev=last;
    size--;
}
void DoublyCL::Display()
{
    PNODE temp=first;
    for(int i=1;i<=size;i++)
    {
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
    cout<<"\n";
}
void DoublyCL::InsretAtPos(int no,int pos)
{
    if((pos<1)||(pos>size+1))
    {
        cout<<"Enter valid position\n";
        return;
    }
    if(pos==1)
    {
        InsertFirst(no);
    }
    else if(pos==size+1)
    {
        InsertLast(no);
    }
    else
    {
        PNODE temp=first;
        PNODE newn=new NODE;
        newn->data=no;
        newn->next=NULL;
        newn->prev=NULL;
        for(int i=1;i<pos-1;i++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next->prev=newn;
        temp->next=newn;
        newn->prev=temp;
    }
    size++;
}

void DoublyCL::DeleteAtPos(int pos)
{
    if((pos<1)||(pos>size))
    {
        cout<<"Enter valid position\n";
        return;
    }
    if(pos==1)
    {
        DeleteFirst();
    }
    else if(pos==size)
    {
        DeleteLast();
    }
    else
    {
        PNODE temp =first;
        for(int i=1;i<pos-1;i++)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;
        delete temp->next->prev;
        temp->next->prev=temp;
    }
    size--;
}
int DoublyCL::Count()
{
    return size;
}

int main()
{
    DoublyCL obj;
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    obj.InsertLast(101);
    obj.InsertLast(111);
    // obj.DeleteFirst();
    // obj.DeleteLast();
    obj.InsretAtPos(8,3);
    obj.DeleteAtPos(4);
    obj.Display();
    int iRet=obj.Count();
    cout<<"Count Are:"<<iRet<<"\n";
    return 0;
}