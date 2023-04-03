// APPLICATION NAME :  

// INPUT = 
/*



*/


// OUTPUT :
/*  



*/


///////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : 
//  Input :     
//  Output : 
//  Author : Shrinivas joshi   
//  Date : 16/11/2022    
//
////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////
// header files ,keywords ,drectives
//////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
    
typedef struct node NODE;
typedef struct node *  PNODE;
typedef struct node ** PPNODE;

///////////////////////////////////////////////////////////
//Bussiness logic function
//////////////////////////////////////////////////////////

struct node
{
    int data;
    struct node *next;
};

void InsertFirst(PPNODE First, int No)
{
    // STEP1:  aloocate the memory for new node
    PNODE newn = (PNODE)malloc(sizeof(PNODE));

    // step2 : initialise the node
    newn->data = No;
    newn->next = First;
}

void Display(PNODE First)
{
    
     
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

