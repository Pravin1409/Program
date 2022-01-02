#include<iostream>
using namespace std;
class LinearSearch
{
    public:
    int Linearsearch(int Arr[],int isize,int no)
    {
        int i=0;
        for(i=0;i<isize;i++)
        {
            if(Arr[i]==no)
            {
                break;
            }
        }
        if(i==isize)
        {
            return -1;
        }
        else
        {
            return i;
        }
    }
};
int main()
{
    int length=0,i=0,no=0;
    int *p=NULL;
    int iret=0;

    cout<<"Enter the length of Array:\n";
    cin>>length;

    p=new int[length];

    cout<<"Element are:\n";
    for(i=0;i<length;i++)
    {
        cout<<"Element :"<<i+1<<"\n";
        cin>>p[i];
    }

    cout<<"Enter number which you want to search\n";
    cin>>no;

    LinearSearch obj;
    iret=obj.Linearsearch(p,length,no);
    if(iret==-1)
    {
        
        cout<<"Number is not present\n";
    }
    else
    {
         cout<<"Number  is present at index:"<<iret<<"\n";
    }

    return 0;
}