#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node*next;
}NODE,*PNODE;
class Queue
{
    private:
    PNODE first;
    int size;
    public:
    Queue();
    void enque(int no);
    int deque();
    void Display();
    int Count();
};
Queue::Queue()
    {
        first=NULL;
        size=0;
    }
void Queue::enque(int no)
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

int Queue::deque()
{
    int no=0;
    if(first==NULL)
    {
        return -1;
    }
    else if(first->next==NULL)
    {
        no=first->data;
        delete first;
        first=NULL;
    }
    else
    {
        no=first->data;
        PNODE temp=first;
        first=first->next;
        delete temp;
    }
    size--;
    return no;
}
void Queue::Display()
{
    PNODE temp=first;
    for(int i=1;i<=size;i++)
    {
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
}

int Queue::Count()
{
    return size;
}
int main()
{
    Queue obj;
    int iRet=0;
    obj.enque(11);
    obj.enque(21);
    obj.enque(51);
    obj.enque(101);
    int ret=obj.deque();
    obj.Display();
    iRet=obj.Count();
    cout<<"Count Are:"<<iRet<<"\n";
    cout<<"Element are"<<ret<<"\n";
    return 0;
}