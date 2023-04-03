#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;


void InsertLast(PPNODE First, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));      
    PNODE temp = *First;
    newn->data = no;
    newn->next = NULL;

    if(*First == NULL)  
    {
        *First = newn;
    }
    else                
    {
        while(temp->next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
    }
}

void InsertFirst(PPNODE First, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));      

    newn->data = no;
    newn->next = NULL;

    if(*First == NULL) 
    {
        *First = newn;
    }
    else                
    {
        newn->next = *First;
        *First = newn;
    }
}

void Display(PNODE First)
{
    printf("Elements from the Linked List are : \n\n");

    while(First != NULL)
    {
        printf("| %d |-> ",First->data);
        First = First -> next;
    }
    printf("NULL \n");
}

int Count(PNODE First)
{
    int iCnt = 0;

    while(First != NULL)
    {
        iCnt++;
        First = First -> next;
    }
    return iCnt;
}

void DeleteFirst(PPNODE First)
{
    PNODE temp = *First;

    if(*First == NULL)  // A
    {
        return;
    }
    else if((*First) -> next == NULL) //B
    {
        free(*First);
        *First = NULL;
    }
    else // C
    {
        (*First) = (*First) -> next;
        free(temp);
    }
}

void DeleteLast(PPNODE First)
{
    PNODE temp = *First;

    if(*First == NULL)  // Empty LL
    {
        return;
    }
    else if((*First) -> next == NULL) // 1 node in LL
    {
        free(*First);
        *First = NULL;
    }
    else // More than 1 node in LL
    {
        while(temp ->next -> next != NULL)
        {
            temp = temp -> next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}

void InsertAtPos(PPNODE First, int no, int ipos)
{
    int NodeCnt = 0, iCnt = 0;
    PNODE newn = NULL;
    PNODE temp = NULL;

    NodeCnt = Count(*First);

    if((ipos < 1) || (ipos > (NodeCnt + 1)))
    {
        printf("Invalid position\n");
        return;
    }

    if(ipos == 1)
    {
        InsertFirst(First,no);
    }
    else if(ipos == NodeCnt+1)
    {
        InsertLast(First,no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = no;
        newn->next = NULL;

        temp = *First;

        for(iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp = temp -> next;
        }

        newn->next = temp -> next;
        temp->next = newn;
    }
}

void DeleteAtPos(PPNODE First, int ipos)
{
    PNODE temp1 = NULL;
    PNODE temp2 = NULL;
    int iCnt = 0, NodeCnt = 0;
    NodeCnt = Count(*First);

    if((ipos < 1) || (ipos > NodeCnt))
    {
        printf("Invalid position\n");
        return;
    }

    if(ipos == 1)
    {
        DeleteFirst(First);
    }
    else if(ipos == NodeCnt)
    {
        DeleteLast(First);
    }
    else
    {
        temp1 = *First;
        for(iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp1 = temp1->next;
        }
        temp2 = temp1->next;
        temp1->next = temp2->next;  // temp1->next = temp1->next->next;
        free(temp2);
    }
}

int Addition_Of_All_Nodes (PNODE First)
{
    int iSum = 0;

    while (First != NULL)
        {
            iSum = iSum + (First->data);
            First = First->next;
        }
    return iSum;
}

int Maximum_Of_All_Nodes(PNODE First)
{
    int iMax = 0;

    if(First == NULL)
        {
            printf("Linked list is empty\n");
            return 0;
        }

    iMax = First->data;

    while (First != NULL)
    {
        if ((First->data) > iMax)
            {
                iMax = First->data;
            }
        
        First = First->next;
    }
    return iMax;
}

int Minimum_Of_All_Nodes(PNODE First)
{
    int iMun = 0;

    if(First == NULL)
        {
            printf("Linked list is empty\n");
            return 0;
        }

    iMun = First->data;

    while (First != NULL)
    {
        if ((First->data) < iMun)
            {
                iMun = First->data;
            }
        
        First = First->next;
    }
    return iMun;
}

void Display_SumDigits_Each_Node(PNODE First)
{
    int iRet = 0;
    while(First != NULL)
        {
            iRet = SumDigits(First->data);
            printf("Addition of Digits of ther number %d is %d \n",First->data,iRet);
            First = First->next;
        }

}

int SumDigits(int iNo)
{
    int iSum = 0, iDigit = 0;
    
    while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum +iDigit;
            iNo = iNo/10;
        } 
    return iSum;
}



int main()
{
    PNODE Head = NULL;
    int iRet = 0;
  

    InsertLast(&Head,11);
    InsertLast(&Head,21);
    InsertLast(&Head,51);
    InsertLast(&Head,101);
    InsertLast(&Head,111);
    InsertLast(&Head,121);

    Display(Head);

    iRet = Addition_Of_All_Nodes(Head);
    printf("\n\nThe addition of all nodes is : %d\n\n",iRet);
   
    iRet = Maximum_Of_All_Nodes(Head);
    printf("The Maximum of all nodes is : %d\n\n",iRet);

    iRet = Minimum_Of_All_Nodes(Head);
    printf("The Minimum of all nodes is : %d\n\n",iRet);

    Display_SumDigits_Each_Node(Head);

    return 0;
}
