#include<iostream>
using namespace std;
typedef struct node
{
    int data;
    struct node*next;
}NODE,*PNODE;
class SinglyCL
{
    private:
    PNODE first;
    PNODE last;
    int size;
    public:
    SinglyCL()
    {
        first=NULL;
        last=NULL;
        size=0;
    }

    void InsertFirst(int);
    void InsertLast(int);
    void DeleteFirst();
    void DeleteLast();
    void InsertAtPos(int ,int);
    void DeleteAtPos(int);
    void Display();
    int Count();
};
void SinglyCL::InsertFirst(int no)
{
    PNODE newn=new NODE;
    newn->data=no;
    newn->next=NULL;
    
    if((first==NULL)&&(last==NULL))
    {
        first=newn;
        last=newn;
    }
    else
    {
        newn->next=first;
        first=newn;
    }
    last->next=first;
    size++;
}
void SinglyCL::InsertLast(int no)
{
    PNODE newn=new NODE;
    newn->data=no;
    newn->next=NULL;
    if((first==NULL)&&(first==last))
    {
        first=newn;
        last=newn;
    }
    else
    {
        last->next=newn;
        last=newn;
    }
    last->next=first;
    size++;
}

void SinglyCL::DeleteFirst()
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
    size--;
}

void SinglyCL::DeleteLast()
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
        while(temp->next!=last)
        {
            temp=temp->next;
        }
        delete last;
        last=temp;
    }
     last->next=first;
     size--;
}

void SinglyCL::InsertAtPos(int no,int pos)
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
        for(int i=1;i<pos-1;i++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next=newn;
    }
    size++;
}

void SinglyCL::DeleteAtPos(int pos)
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
void SinglyCL::Display()
{
    PNODE temp=first;
    for(int i=1;i<=size;i++)
    {
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
    cout<<"\n";
}

int SinglyCL::Count()
{
   return size; 
}
int main()
{
    SinglyCL obj;
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    obj.InsertLast(101);
    // obj.InsertLast(111);
    obj.DeleteFirst();
    // obj.DeleteLast();
    obj.InsertAtPos(8,3);
    obj.DeleteAtPos(2);
    obj.Display();
    int iRet=obj.Count();
    cout<<"Count Are:"<<iRet<<"\n";
    return 0;
}