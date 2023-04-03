
///////////////////////////////////////////////////////////
// header files ,keywords ,drectives
//////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node ** PPNODE;

///////////////////////////////////////////////////////////
//Bussiness logic function
//////////////////////////////////////////////////////////

struct node 
{
    int data;
    struct node *next;
    struct node *prev;  //x
};  //20 bytes


void InserFirst(PPNODE First,int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->prev = NULL;
    newn->data = no;
    newn->next = NULL;

    if(*First == NULL)
        {
            *First = newn;
        } 
    else
        {
            newn->next = *First;
            (*First)->prev = newn;
            *First = newn;
        }
}

void InserLast(PPNODE First,int no)
{
    PNODE temp = NULL;
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->prev = NULL;
    newn->data = no;
    newn->next = NULL;

    if(*First == NULL)
        {
            *First = newn;
        } 
    else
        {
            temp = *First;

            while(temp->next != NULL)
                {
                    temp = temp->next;
                }
            temp->next = newn;
            newn->prev = temp;

        }
}

void Display(PNODE First)
{
    printf("Elements of Linked List are\n");

    while(First != NULL)
        {
            printf("| %d |<=>",First->data);
            First = First->next;
        }
    printf("NULL\n");
}

int Count (PNODE First)
{
    int iCnt = 0; 
    printf("Elements of Linked List are\n");

    while(First != NULL)
        {
            iCnt++;
            First = First->next;
        }
    return iCnt;
}

void DeleteFirst(PPNODE First)
{
    if(*First == NULL)
        {
            return;
        }
    else if((*First)->next == NULL)
        {
            free(*First);
            *First = NULL;
        }
    else
        {
            *First = (*First)->next;
            free((*First)->prev)
            (*First)->prev = NULL; 
        }    
}

void DeleteLast(PPNODE First)
{
    PNODE temp = *First; 
    if(*First == NULL)
        {
            return;
        }
    else if((*First)->next == NULL)
        {
            free(*First);
            *First = NULL;
        }
    else
        {
            while(temp->next->next != NULL)
                {
                    temp = temp->next;
                }
            free(temp->next);
            temp->next = NULL;
        }    
}

//////////////////////////////////////////////////////////
//Entry point function 
//////////////////////////////////////////////////////////

int main()
{
    int iRet = 0;
    PNODE Head = NULL;
    InserFirst(&Head,51);
    InserFirst(&Head,21);
    InserFirst(&Head,11);


    InserLast(&Head,101);
    InserLast(&Head,111);
    InserLast(&Head,121);

    Display(Head);
    iRet = Count(Head);
   
    DeleteFirst(&Head);
    DeleteLast(&Head);

    Display(Head);
    iRet = Count(Head);

    return 0;



}





















