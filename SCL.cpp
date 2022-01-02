#include<iostream>
using namespace std;
typedef struct node
{
    int data;
    struct node*next;
    struct node*prev;
}NODE,*PNODE;
class SinglyCL
{
    private:
    PNODE first;
    PNODE last;
    int size;
    public:
    SinglyCL();
    void InsertFirst(int);
    void InsertLast(int);
    void InsertAtPos(int,int);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);
    void Display();
    int Count();
};
SinglyCL::SinglyCL()
{
    first=NULL;
    last=NULL;
    size=0;
}
void SinglyCL::InsertFirst(int no)
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
    newn->prev=NULL;
    if((first==NULL)&&(last==NULL))
    {
        first=newn;
        last=newn;
    }
    else
    {
        last->next=newn;
        last=newn;
        last->next=first;
    }
    size++;
}
void SinglyCL::Display()
{
    PNODE temp=first;
    for(int i=1;i<=size;i++)
    {
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
    
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
    obj.InsertFirst(5);
    obj.InsertLast(101);
    obj.Display();
    int iRet=obj.Count();
    cout<<"Count Are:"<<iRet<<"\n";
    return 0;
}