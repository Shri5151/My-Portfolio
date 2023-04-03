
//////////////////////////////////////////////////////////
// header files ,keywords ,drectives
//////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

#pragma pack(1)

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;


//////////////////////////////////////////////////////////
//Bussiness logic function
//////////////////////////////////////////////////////////
struct node 
{
    int data;
    struct node *next;
};

class Singly_LL
{
    public:
        PNODE First;
        int iNodeCount;

        Singly_LL();

        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPosition(int no,int ipos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPosition(int ipos);

        void Display();
};

Singly_LL :: Singly_LL()
    {
        First = NULL;
        iNodeCount = 0;
    }
void Singly_LL :: InsertFirst(int no)
    {
        // 1: Allocate memory 
        PNODE newn = new NODE;
        
        // 2: Initialise node
        newn->data = no;
        newn->next = NULL;

        // 3: check if LL is empty 
        if (First == NULL) // or if (iNodeCount == 0)
            {
                First = newn;
                iNodeCount++;
            }

        else // if LL is not empty 
            {
                newn->next = First;
                First = newn;
                iNodeCount++;
            }
    }
void Singly_LL :: InsertLast(int no)
    {
        // 1: Allocate memory 
        PNODE newn = new NODE;
        
        // 2: Initialise node
        newn->data = no;
        newn->next = NULL;

        // 3: check if LL is empty 
        if (First == NULL) // or if (iNodeCount == 0)
            {
                First = newn;
                iNodeCount++;
            }

        else // if LL is not empty 
            {
                PNODE temp = First;

                while (temp->next != NULL)
                    {
                        temp = temp->next;
                    }
                temp->next = newn;
                iNodeCount++;
            }
    }
void Singly_LL :: InsertAtPosition(int no,int ipos)
    {

    }

void Singly_LL :: DeleteFirst()
    {
        if (First == NULL)
            {
                return;
            }
        else if (First->next = NULL)
            {
                delete First;
                First = NULL;
                iNodeCount--;
            }
        else
            {
                PNODE temp = First;
                First = First->next;
                delete temp;
                iNodeCount--;
            }
    }
void Singly_LL :: DeleteLast()
    {
        if (First == NULL)
            {
                return;
            }
        else if (First->next = NULL)
            {
                delete First;
                First = NULL;
                iNodeCount--;
            }
        else
            {
                PNODE temp = First;

                while (temp->next->next != NULL)
                    {
                        temp = temp->next;
                    }
                    delete temp->next;
                    temp->next = NULL;
                    iNodeCount--;
            }

    }
void Singly_LL :: DeleteAtPosition(int ipos)
    {

    }

void Singly_LL :: Display()
    {
        cout<<"Elements of Linked List are : "<<"\n";
        PNODE temp = First;

        while (temp != NULL)
            {
                cout<<"|"<<temp->data<<"|->";
                temp = temp->next;
            }
        cout<<"NULL"<<"\n";      
    }


//////////////////////////////////////////////////////////
//Entry point function 
//////////////////////////////////////////////////////////

int main()
{
    Singly_LL obj1;

    cout<<sizeof(obj1)<<"\n";
    cout<<"First Pointer contains :"<<obj1.First<<"\n";
    cout<<"Number of nodes are :"<<obj1.iNodeCount<<"\n";

    obj1.InsertFirst(51);
    obj1.InsertFirst(21);
    obj1.InsertFirst(11);

    obj1.Display();

    cout<<"Number of nodes are :"<<obj1.iNodeCount<<"\n";
    
    obj1.InsertLast(101);
    obj1.InsertLast(111);
    obj1.InsertLast(121);

    obj1.Display();
    cout<<"Number of nodes are :"<<obj1.iNodeCount<<"\n";

    obj1.DeleteFirst();

    obj1.Display();
    cout<<"Number of nodes are :"<<obj1.iNodeCount<<"\n";

    obj1.DeleteLast();

    obj1.Display();
    cout<<"Number of nodes are :"<<obj1.iNodeCount<<"\n";

    return 0;
}