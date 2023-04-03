#include<iostream>
using namespace std;

template<class T>

struct node
{
    T data;
    struct node *next;
};



template<class T>
class SinglyLL
{
    public :
    struct node<T>* First;

    SinglyLL();
    void InsertFirst(T no);
    void Display();
    int Count();


};

template<class T>
SinglyLL <T> ::SinglyLL()
    {
        First = NULL;
    }

template<class T>
void SinglyLL <T> ::InsertFirst (T no)
    {
        struct node<T>* newn = new struct node<T>;

        newn->data = no;
        newn->next = NULL;

        if(First == NULL)
            {
                First = newn;
            }            
        else
            {
                newn->next = First;
                First = newn;
            }
    }

template<class T>
void SinglyLL <T> :: Display()
    {
        struct node<T>* temp = First;

        while (temp != NULL)
            {
                cout<<temp->data<<" ";
                temp = temp->next;
            }
        cout<<"\n";
    }

template<class T>
int SinglyLL <T> :: Count()
    {
        struct node<T>* temp = First;
        int iCnt = 0;
        while (temp != NULL)
            {
                iCnt++;
                temp = temp->next;
            }
        return iCnt;
    }

int main()
{
    SinglyLL <int> obj1;

    obj1.InsertFirst(101);
    obj1.InsertFirst(51);
    obj1.InsertFirst(21);
    obj1.InsertFirst(11);

    obj1.Display();

    int iRet = obj1.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";


    SinglyLL <string> obj2;

    obj2.InsertFirst("Shri joshi");
    obj2.InsertFirst("abcd asg");
    obj2.InsertFirst("badf asdf");
    obj2.InsertFirst("aasd asdf");

    obj2.Display();

    iRet = obj2.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";


    return 0;
}