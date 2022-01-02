#include<iostream>
using namespace std;
typedef struct node
{
    int data;
    struct node*next;
}NODE,*PNODE;
class SinglyLL
{
    private:
    PNODE first;
    int size;
    public:
    SinglyLL();
    void InsertFirst(int);
    void InsertLast(int);
    void InsertAtPos(int ,int);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);
    int Count();
    void Display();
};
SinglyLL::SinglyLL()
{
    first=NULL;
    size=0;
}
void SinglyLL::InsertFirst(int no)
{
    PNODE newn=new NODE;
    newn->data=no;
    newn->next=NULL;

    if(first==NULL)
    {
        first=newn;
    }
    else
    {
        newn->next=first;
        first=newn;
    }
    size++;
}

void SinglyLL::InsertLast(int no)
{
    PNODE newn=new NODE;
    newn->data=no;
    newn->next=NULL;

    if(first==NULL)
    {
        first=newn;
    }
    else
    {
        PNODE temp=first;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;

    }
    size++;
}
void SinglyLL::DeleteFirst()
{
    if(first==NULL)
    {
        return;
    }
    else if(first->next==NULL)
    {
        delete first;
        first=NULL;
    }
    else
    {
        PNODE temp=first;
        first=first->next;
        delete temp;
    }
    size--;
}

void SinglyLL::DeleteLast()
{
    if(first==NULL)
    {
        return;
    }
    else if(first->next==NULL)
    {
        delete first;
        first=NULL;
    }
    else
    {
        PNODE temp=first;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        delete temp->next;
        temp->next=NULL;
    }
    size--;
}

void SinglyLL::InsertAtPos(int no,int pos)
{
    PNODE newn=new NODE;
    newn->data=no;
    newn->next=NULL;
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
        for(int i=1;i<pos-1;i++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next=newn;
    }
}
void SinglyLL::DeleteAtPos(int pos)
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
        PNODE temp=first;
        PNODE target=NULL;
        for(int i=1;i<pos-1;i++)
        {
            temp=temp->next;
        }
        target=temp->next;
        temp->next=target->next;
        delete target;
    }
    size--;
}
void SinglyLL::Display()
{
    PNODE temp=first;
    while(temp!=NULL)
    {
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
}
int SinglyLL::Count()
{
    return size;
}
int main()
{
    SinglyLL obj;
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertFirst(3);
    obj.DeleteFirst();
    // obj.DeleteLast();
    obj.InsertAtPos(34,1);
    obj.DeleteAtPos(2);
    obj.Display();
    int iRet=obj.Count();
    cout<<"Count are: "<<iRet<<"\n";

    return 0;
}