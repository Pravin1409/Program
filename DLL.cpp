#include<iostream>
using namespace std;
typedef struct node 
{
    int data;
    struct node*next;
    struct node*prev;
}NODE,*PNODE,**PPNODE;

class SinglyDL
{
    private:
    PNODE first;
    int size;

    public:
    SinglyDL()
    {
        first=NULL;
        size=0;
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
    
    void InsertFirst(int no)
    {
        PNODE newn=new NODE;
        newn->data=no;
        newn->next=NULL;
        newn->prev=NULL;

        if(first==NULL)
        {
            first=newn;
        }
        else
        {
            newn->next=first;
            first->prev=newn;

            first=newn;
           
        }
         size++;
    }

    void InsertLast(int no)
    {
        PNODE newn=new NODE;
        newn->data=no;
        newn->next=NULL;
        newn->prev=NULL;

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
            newn->prev=temp;
            
        }
        size++;
    }

    void DeleteFirst()
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
          first=first->next;
          delete first->prev;
          first->prev=NULL;
      }
      size--;
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
        }
        else
        {
            PNODE temp=first;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->prev->next=NULL;
            delete temp;
           
        }
        size--;
    }

    void InsertAtPos(int no,int pos)
    {
        PNODE newn=new NODE;

        if((pos<1)||(pos>size+1))
        {
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
            int i=0;
            for(i=1;i<pos-1;i++)
            {
                temp=temp->next;
            }
            temp->next=temp->next->next;
            delete temp->next->prev;
            temp->next->prev=temp;

        }
        size--;
    }
    int Count()
    {
        return size;
    }
};
int main()
{
    SinglyDL obj;
    int iRet=0;
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    obj.InsertLast(101);
    // obj.DeleteFirst();
    obj.DeleteLast();
    // obj.DeleteAtPos(3);
    obj.DeleteAtPos(3);

    iRet=obj.Count();
    obj.Display();
    cout<<"Count Are:"<<iRet<<"\n";

    return 0;
}