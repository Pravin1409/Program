#include<iostream>
using namespace std;
typedef struct node
{
    int data;
    struct node*next;
}NODE,*PNODE;
class Stack
{
    private:
    PNODE first;
    int size;
    public:
    Stack();
    void push(int);
    int pop();
    void Display();
    int Count();

};

Stack::Stack()
{
    first=NULL;
    size=0;
}

void Stack::push(int no)
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

int Stack::pop()
{
    PNODE temp=first;
    int no=0;
    if(first==NULL)
    {
        cout<<"Stack is empty";
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
        first=first->next;
        delete temp;
    }
    size--;
    return no;
}
void Stack::Display()
{
    PNODE temp=first;
    for(int i=1;i<=size;i++)
    {
        cout<<"|"<<temp->data<<"|"<<"\n";
        temp=temp->next;
    }
    cout<<"\n";
}
int Stack::Count()
{
    return size;
}

int main()
{
    Stack obj;
    obj.push(51);
    obj.push(21);
    obj.push(11);
    obj.push(8);
    obj.Display();
    int iRet=obj.Count();
    cout<<"Count Are:"<<iRet<<"\n";
    int Ret=obj.pop();
    obj.Display();
    cout<<"Poped element are:"<<Ret<<"\n";
    return 0;
}