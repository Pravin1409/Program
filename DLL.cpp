#include<iostream>
using namespace std;
typedef struct node
{
    int data;
    struct node*next;
    struct node*prev;
}NODE,*PNODE;
class DoublyLL
{
    private:
    PNODE frist;
    int size;
    public:
    DoublyLL()
    {
        frist=NULL;
        size=0;
    }
    void InsertFirst(int);
    void InsertLast(int);
    void DeleteFirst();
    void DeleteLast();
    void InsertAtPos(int,int);
    void DeleteAtPos(int);
    void Display();
    int Count();
};
void DoublyLL::InsertFirst(int no)
{
    PNODE newn=new NODE;
    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;

    if(frist==NULL)
    {
        frist=newn;
    }
    else
    {
        newn->next=frist;
        frist->prev=newn;
        frist=newn;
    }
    size++;
}

void DoublyLL::InsertLast(int no)
{
    PNODE newn=new NODE;
    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;
    if(frist==NULL)
    {
        frist=newn;
    }
    else
    {
        PNODE temp=frist;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
        newn->prev=temp;
    }
    size++;
}

void DoublyLL::DeleteFirst()
{
    if(frist==NULL)
    {
        return;
    }
    else if(frist->next==NULL)
    {
        delete frist;
        frist=NULL;
    }
    else
    {
        PNODE temp=frist;
        frist=frist->next;
        delete temp;
    }
    size--;
}
void DoublyLL::DeleteLast()
{
    if(frist==NULL)
    {
        return;
    }
    else if(frist->next==NULL)
    {
        delete frist;
        frist=NULL;
    }
    else
    {
        PNODE temp=frist;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        delete temp->next;
        temp->next=NULL;
    }
    size--;
}
void DoublyLL::Display()
{
    PNODE temp=frist;
    for(int i=1;i<=size;i++)
    {
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
    cout<<"\n";
}
void DoublyLL::InsertAtPos(int no,int pos)
{
    PNODE newn=new NODE;
    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;
    if(pos<1||pos>size+1)
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
        PNODE temp=frist;
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

void DoublyLL::DeleteAtPos(int pos)
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
        PNODE temp=frist;
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
int DoublyLL::Count()
{
    return size;
}
int main()
{
    DoublyLL obj;
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    obj.InsertLast(101);
    obj.InsertLast(111);
    // obj.DeleteFirst();
    // obj.DeleteLast();
    obj.InsertAtPos(8,3);
    obj.DeleteAtPos(3);
    obj.Display();
    int iRet=obj.Count();
    cout<<"count Are:"<<iRet<<"\n";
    return 0;
}