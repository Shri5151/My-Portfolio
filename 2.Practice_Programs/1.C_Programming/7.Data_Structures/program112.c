
///////////////////////////////////////////////////////////
// header files ,keywords ,drectives
//////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

///////////////////////////////////////////////////////////
//Bussiness logic function
//////////////////////////////////////////////////////////

struct node
{
    int data;
    struct node *next;
};


void InsertFirst(PPNODE First,int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;
    if (*First == NULL) // if linked list is empty
        {
            *First = newn;
        }
    else      // if linked list contains atleast one node
        {
            newn->next = *First;
            *First = newn;
        }

}

void InsertLast(PPNODE Last,int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if (*Last == NULL) // if linked list is empty
        {
            *Last = newn;
        }
    else      // if linked list contains atleast one node
        {
            
        }

}

void Display(PNODE First)
{
    printf("Elements from the linked list are : \n");
    while(First != NULL)
        {
            printf("| %d |->",First->data);
            First = First -> next;
        }   

    printf("NUll\n");
}

//////////////////////////////////////////////////////////
//Entry point function 
//////////////////////////////////////////////////////////


int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);

    Display(Head);
    return 0;
}




















