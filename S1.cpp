#include<iostream>
using namespace std ;
typedef struct node
{
    int data;
    struct node*next;
}NODE,*PNODE,**PPNODE;
class SinglyLL
{
    private:
    PNODE first;
    PNODE last;
    int size;

    public :
    SinglyLL()
    {
        first=NULL;
        size=0;
    }

    void InsertFirst(int no)
    {
        PNODE newn=NULL;
        newn=new NODE;
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
    void InsertLast(int no)
    {
        PNODE temp=first;
        PNODE newn=NULL;
        newn=new NODE;
        newn->data=no;
        newn->next=NULL;

        if(first==NULL)
        {
            first=newn;
        }
        else
        {
            
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newn;
          
        }
        size++;
    }

    void InsertAtPos(int no,int pos)
    {
        PNODE newn=new NODE;
         newn->data=no;
            newn->next=NULL;

        if((pos<1)||(pos>size+1))
        {
            cout<<"Enter valid choice:\n";
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
            int i=0;
            for(i=1;i<pos-1;i++)
            {
                temp=temp->next;
            }
            newn->next=temp->next;
            temp->next=newn;
        }
    size++;
    }

    void DeleteFirst()
    {
        PNODE temp=first;
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
        
    }

    void DeleteLast()
    {
        PNODE temp=first;
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
            while(temp->next->next!=NULL)
            {
                temp=temp->next;
            }
            delete temp->next;
            temp->next=NULL;
        }
       size--;
    }

    void DeleteAtPos(int pos)
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
            int i=0;
            for(i=1;i<pos-1;i++)
            {
                temp=temp->next;
            }
            target=temp->next;
            temp->next=target->next;
            delete target;
            
        }
       size--;
    }
    
    int Count()
    {
        return size;
    }
    void Display()
    {
        PNODE temp=first;
        while(temp!=NULL)
        {
            cout<<temp->data<<"\t";
            temp=temp->next;
        }
    }
};

int main()
{
    int iRet=0;
    SinglyLL obj;
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    obj.InsertFirst(9);
    obj.InsertLast(4);
    obj.InsertLast(999);
    obj.InsertLast(90);
    obj.InsertAtPos(30,3);
    obj.DeleteFirst();
    // obj.DeleteLast();
    obj.DeleteAtPos(1);
    obj.DeleteAtPos(1);

    obj.Display();
    iRet=obj.Count();
    cout<<"Count Are:"<<iRet<<"\n";

    return 0;
}