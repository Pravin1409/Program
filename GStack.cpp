#include <iostream>
using namespace std;
template <typename T>
struct node
{
    T data;
    struct node *next;
};
template <class T>
class Stack
{
private:
    node<T> *first;
    int size;

public:
    Stack();
    void Push(T);
    int Pop();
    void Display();
    int Count();
};
template <class T>
Stack<T>::Stack()
{
    first = NULL;
    size = 0;
}
template <class T>
void Stack<T>::Push(T no)
{
    node<T> *newn = new node<T>;
    newn->data = no;
    newn->next = NULL;
    if (first == NULL)
    {
        first = newn;
    }
    else
    {
        newn->next = first;
        first = newn;
    }
    size++;
}
template <class T>
int Stack<T>::Pop()
{
    int no = 0;
    node<T> *temp = first;
    if (first == NULL)
    {
        cout << "Stack Are empty\n";
        return 0;
    }
    else if (first->next == NULL)
    {
        no = first->data;
        delete first;
        first = NULL;
    }
    else
    {
        no = first->data;
        first = first->next;
        delete temp;
    }
    size--;
    return no;
}
template <class T>
void Stack<T>::Display()
{
    node<T> *temp = first;
    for (int i = 1; i <= size; i++)
    {
        cout << temp->data << "\t";
        temp = temp->next;
    }
    cout << "\n";
}
template <class T>
int Stack<T>::Count()
{
    return size;
}
int main()
{
    // Stack<int>obj;
    // int no=0,iRet=0,Ret=0;
    // int choice=1;
    // while(choice!=0)
    // {
    //     cout<<"----------------------------------------------------------------\n";
    //     cout<<"1:Push the element in stack\n";
    //     cout<<"2:Pop the element from stack\n";
    //     cout<<"3:count the number of element from stack\n";
    //     cout<<"4:Display element of Stack\n";
    //     cout<<"0:!!!THANK YOU !!!\n";
    //     cout<<"----------------------------------------------------------------\n";
    //     cin>>choice;

    //     switch(choice)
    //     {
    //         case 1:
    //         cout<<"Enter the data\n";
    //         cin>>no;
    //         obj.Push(no);
    //         break;

    //         case 2:
    //         obj.Display();
    //         Ret=obj.Pop();
    //         obj.Display();
    //         cout<<"Poped element are:"<<Ret<<"\n";

    //         break;
    //         case 3:
    //         obj.Display();
    //         iRet=obj.Count();
    //         cout<<"Number of element from stack: "<<iRet<<"\n";
    //         break;

    //         case 4:
    //         obj.Display();
    //         break;

    //         case 0:
    //         cout<<"!!! THANK YOU !!!\n";
    //         break;

    //         default:
    //         cout<<"Please enter valid choice: "<<"\n";
    //         break;

    //     }
    // }
    // /////////////////////////////////////////////////////////////////////////////////////////////////

    // Stack<char>cobj;
    // int Choice=1;
    // char ch='\0';
    // int iRet=0;
    // while(Choice!=0)
    // {
    //     cout<<"----------------------------------------------------\n";
    //     cout<<"1:Push the element in Stack\n";
    //     cout<<"2:pop the element from stack\n";
    //     cout<<"3:count number of element of from stack\n";
    //     cout<<"4:Display element from stck\n";
    //     cout<<"0:!!! THANK YOU !!!\n";
    //     cout<<"----------------------------------------------------\n";
    //     cin>>Choice;
    //     switch(Choice)
    //     {
    //         case 1:
    //         cout<<"Enter data\n";
    //         cin>>ch;
    //         cobj.Push(ch);
    //         break;

    //         case 2:
    //        cobj.Display();
    //        ch= cobj.Pop();
    //        cout<<"poped element are:"<<ch<<"\n";
    //        cobj.Display();
    //         break;

    //         case 3:
    //         cobj.Display();
    //         iRet=cobj.Count();
    //         cout<<"Count Are:"<<iRet<<"\n";
    //         break;

    //         case 4:
    //         cobj.Display();
    //         break;

    //         case 0:
    //         cout<<"!!! THANK YOU !!!\n";
    //         break;

    //         default:
    //         cout<<"Enter valid choice\n";
    //         break;
    //     }
    //////////////////////////////////////////////////////
    Stack<float> cobj;
    int Choice = 1;
    float no = 0;
    float fret = 0;
    float iRet = 0;
    while (Choice != 0)
    {
        cout << "----------------------------------------------------\n";
        cout << "1:Push the element in Stack\n";
        cout << "2:pop the element from stack\n";
        cout << "3:count number of element of from stack\n";
        cout << "4:Display element from stck\n";
        cout << "0:!!! THANK YOU !!!\n";
        cout << "----------------------------------------------------\n";
        cin >> Choice;
        switch (Choice)
        {
        case 1:
            cout << "Enter data\n";
            cin >> no;
            cobj.Push(no);
            break;

        case 2:
            cobj.Display();
            fret = cobj.Pop();
            cout << "poped element are:" << fret << "\n";
            cobj.Display();
            break;

        case 3:
            cobj.Display();
            iRet = cobj.Count();
            cout << "Count Are:" << iRet << "\n";
            break;

        case 4:
            cobj.Display();
            break;

        case 0:
            cout << "!!! THANK YOU !!!\n";
            break;

        default:
            cout << "Enter valid choice\n";
            break;
        }
    }
    return 0;
}