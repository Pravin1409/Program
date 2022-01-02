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
    SinglyLL()
    {
        first=NULL;
        size=0;
    }
    void InsertFirst(int);
    void InsertLast(int);
    void InsertAtPos(int ,int);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);
    void Display();
    int Count();
};
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
        PNODE newn=new NODE;
        newn->data=no;
        newn->next=NULL;
        PNODE temp=first;
        for(int i=1;i<pos-1;i++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next=newn;
    }
    size++;

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

int SinglyLL::Count()
{
    return size;
}

void SinglyLL::Display()
{
    PNODE temp=first;
    for(int i=1;i<=size;i++)
    {
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
    cout<<"\n";
}


int main()
{
    int iRet=0;
    SinglyLL obj;
    obj.InsertFirst(55);
    obj.InsertFirst(25);
    obj.InsertFirst(15);
    obj.InsertFirst(8);
    obj.InsertLast(101);
    obj.InsertLast(111);
    // obj.DeleteFirst();
    // obj.DeleteFirst();
    obj.DeleteLast();
    obj.InsertAtPos(8,4);
    obj.DeleteAtPos(3);
    obj.Display();
    iRet=obj.Count();
    cout<<"Count Are:"<<iRet<<"\n";
    return 0;
}