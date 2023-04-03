#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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

bool ChkPerfect(int iNo)
{
    int iSum = 0;
    int iTemp = iNo;
    int iCnt = 0;

    for(iCnt = 1 ; iCnt <= (iNo/2) ; iCnt++)
        {
            if (iNo % iCnt == 0)
                {
                    iSum = iSum + iCnt;
                }
        }
    return (iSum == iTemp);
}

void Display_Perfect(PNODE First)
{
    printf("Perfect Numbers in linked list are : \n");
    while(First != NULL)
        {
            if (ChkPerfect (First->data) == true)
                {
                    printf("%d\n",(First->data));
                }
            First = First->next;
        }
}

int main()
{
    PNODE Head = NULL;
    int iChoice = 0 , iPos = 0, iNo = 0,iRet = 0;

 printf("Welcome to the data structre application written by Marvellous Infosystems\n");

    while(1)
    {
        printf("------------------------------------------\n");

        printf("Please select the desired option : \n");
        printf("1 : Insert new node at first position\n");
        printf("2 : Insert new node at last position\n");
        printf("3 : Insert new node at given position\n");
        printf("4 : Delete node from first position\n");
        printf("5 : Delete node from last position\n");
        printf("6 : Delete node from given position\n");
        printf("7 : Display the contents of Linked List\n");
        printf("8 : Count number of nodes from Linked List\n");

        scanf("%d",&iChoice);

        switch(iChoice)
        {
            case 1:
                printf("Enter the data that you want to insert : \n");
                scanf("%d",&iNo);

                InsertFirst(&Head, iNo);
                break;
            
            case 2:
                printf("Enter the data that you want to insert : \n");
                scanf("%d",&iNo);

                InsertLast(&Head, iNo);            
                break;    
            
            case 3:
                printf("Enter the data that you want to insert : \n");
                scanf("%d",&iNo);

                printf("Enter the position : \n");
                scanf("%d",&iPos);

                InsertAtPos(&Head, iNo, iPos);              
                break;
            
            case 4:
                DeleteFirst(&Head);
                break;
            
            case 5:
                DeleteLast(&Head);
                break;
            
            case 6:
                printf("Enter the position : \n");
                scanf("%d",&iPos);

                DeleteAtPos(&Head, iPos);
                break;
            
            case 7:
                Display(Head);
                break;                
            
            case 8:
                iRet = Count(Head);
                printf("Number of elements are : %d\n",iRet);
                break;
            
            case 9:
                printf("Thank you for using the application\n");
                return 0;

            default:
                printf("Invalid option\n");
                break;
        }
        printf("------------------------------------------\n");
    }

    return 0;
}
