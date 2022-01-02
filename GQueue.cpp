#include <iostream>
using namespace std;
template <typename T>
struct node
{
    T data;
    struct node *next;
};
template <class T>
class Queue
{
private:
    node<T> *first;
    int size;

public:
    Queue();
    void enque(int no);
    int deque();
    void Display();
    int Count();
};
template <class T>
Queue<T>::Queue()
{
    first = NULL;
    size = 0;
}
template <class T>
void Queue<T>::enque(int no)
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
        node<T> *temp = first;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
    size++;
}
template <class T>
int Queue<T>::deque()
{
    char no;
    if (first == NULL)
    {
        return -1;
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
        node<T> *temp = first;
        first = first->next;
        delete temp;
    }
    size--;
    return no;
}
template <class T>
void Queue<T>::Display()
{
    node<T> *temp = first;
    for (int i = 1; i <= size; i++)
    {
        cout << temp->data << "\t";
        temp = temp->next;
    }
}
template <class T>
int Queue<T>::Count()
{
    return size;
}
int main()
{
//     Queue<int> obj;
//     int iRet = 0;
//     obj.enque(11);
//     obj.enque(21);
//     obj.enque(51);
//     obj.enque(101);
//     char ret = obj.deque();
//     obj.Display();
//     iRet = obj.Count();
//     cout << "Count Are:" << iRet << "\n";
//     cout << "Element are" << ret << "\n";
    //////////////////////////////////////////////////////////////////
    
    Queue<char> cobj;
    int Ret = 0;
    char iRet=0;
    cobj.enque('A');
    cobj.enque('Q');
    cobj.enque('Z');
    cobj.enque('D');
    cobj.Display();
    Ret = cobj.Count();
    cout<<"\nCount are:"<<Ret<<"\n";
    iRet=cobj.deque();
    cout<<"\nRevove is:"<<iRet<<"\n";
    cobj.Display();
    Ret = cobj.Count();
    cout<<"\nCount are:"<<Ret<<"\n";
    return 0;
}