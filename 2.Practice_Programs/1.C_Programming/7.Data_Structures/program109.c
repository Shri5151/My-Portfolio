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


///////////////////////////////////////////////////////////
//Bussiness logic function
//////////////////////////////////////////////////////////

struct node
{
    int data;
    struct node *next;
};


//////////////////////////////////////////////////////////
//Entry point function 
//////////////////////////////////////////////////////////
int main()
{
    struct node *newn = (struct node*)malloc(sizeof(struct node));

    newn->data = 11;
    newn->next = NULL;

    printf("Data : %d\n",newn->data);
    printf("Size of structure : %d\n",sizeof(struct node));


    return 0;    
}

