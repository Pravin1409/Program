#include<iostream>
using namespace std;
typedef struct node
{
    int data;
    struct node*next;
}NODE,*PNODE,**PPNODE;

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
            PNODE temp=first;
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
            cout<<"Enter valid Position\n";
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
            int i=0;
            PNODE temp=first;
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
        if(first!=NULL)
        {
            first=first->next;
            delete temp;
            size--;
        }
    }

    void DeleteLast()
    {
        if(first==NULL)
        {
            return;
        }
        else if(first->next==NULL)
        {
            delete first;
            first=NULL;
            size--;
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
            size--;
        }
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
                temp = temp -> next;
            }
            target=temp->next;
            temp->next=target->next;
            delete target;
        }
        size--;
    }

     void Display()
    {
        PNODE temp = first;
        
        while(temp!= NULL)
        {
            cout<<temp->data<<"\t";
            temp = temp->next;
        }
        cout<<"\n";
    }
    

    int Count()
    {
        return size;
    }
};

int main()
{
    SinglyLL obj;
    int Choice=1;
    int value=0,pos=0,iRet=0;

    while(Choice!=0)
    {
        cout<<"------------------------------------------------\n";
        cout<<"Enter desire operation which you want to perform on SLL\n";
        cout<<"1:Insert First\n";
        cout<<"2:Insert Last\n";
        cout<<"3:Insrt At Position\n";
        cout<<"4:Delete First\n";
        cout<<"5:Delete Last\n";
        cout<<"6:Delete At Positon\n";
        cout<<"7:Display\n";
        cout<<"8:Count\n";
        cout<<"0:terminate the Application\n";
        cout<<"--------------------------------------------------------\n";
        cin>>Choice;

        switch(Choice)
        {
            case 1:
            cout<<"enter data\n";
            cin>>value;
            obj.InsertFirst(value);
            
            break;

            case 2:
            cout<<"Enter data\n";
            cin>>value;
            obj.InsertLast(value);
            break;

            case 3:
            cout<<"Enter data\n";
            cin>>value;
            cout<<"Enter Position\n";
            cin>>pos;
            obj.InsertAtPos(value,pos);
            break;

            case 4:
            obj.DeleteFirst();
            break;

            case 5:
            obj.DeleteLast();
            break;

            case 6:
            cout<<"Enter position\n";
            cin>>pos;
            obj.DeleteAtPos(pos);
            break;

            case 7:
            obj.Display();
            break;

            case 8:
            iRet=obj.Count();
            cout<<"Count Are:"<<iRet<<"\n";
            break;

            case 0:
            cout<<"!!! THANK YOU !!!\n";
            break;

            default:
            cout<<"Enter valid choice\n";
            break;
        }
    }

    
    return 0;
}