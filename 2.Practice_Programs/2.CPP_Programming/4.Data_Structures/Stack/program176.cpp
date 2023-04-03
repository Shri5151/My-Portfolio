#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

class Stack
{
    public:
        struct node *First;
        int iCount;

        Stack();

        bool IsStackEmpty();
        void Push(int no);      // Insert
        int Pop();              // Delete
        void Display();
};

Stack :: Stack()
{
    First = NULL;
    iCount = 0;
}

bool Stack :: IsStackEmpty()
{
    if(iCount == 0)
        {
            return true;
        }
    else
        {
            return false;
        }
}

void Stack :: Push(int no)     //Insert First
{
    struct node *newn = new struct node;

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

    iCount++;
    cout<<no<<" pushed Susseccfully!"<<"\n";
}

int Stack :: Pop()   // Delete last 
{
    if(First == NULL)
        {
            cout<<"Unable to pop the element as stack is empty"<<"\n";
            return -1;
        }
    else    
        {
            int Value = First -> data;
            struct node *temp = First;

            First = First->next;
            delete temp;

            iCount--;
            
            return Value;
        }
}

void Stack :: Display()
{
    if (First == NULL)
        {
            cout<<"Stack is empty."<<"\n";
        }
    else
        {
            cout<<"Elements of staccck are :"<<"\n";

            struct node *temp = First;
            while(temp != NULL)
                {
                    cout<<"| "<<temp->data<<" |->";
                    temp = temp->next;
                }
            cout<<"NULL"<<"\n";
        }

}

int main()
{

    Stack obj;
    obj.Push(11);
    obj.Push(21);
    obj.Push(51);
    obj.Push(101);
    
    obj.Display();

    int iRet = obj.Pop();
    cout<<iRet<<" Removed Successfully!" <<"\n";

    iRet = obj.Pop();
    cout<<iRet<<" Removed Successfully!" <<"\n";
    
    obj.Display();

    return 0;
}