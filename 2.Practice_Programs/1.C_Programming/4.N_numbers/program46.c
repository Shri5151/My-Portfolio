// APPLICATION NAME : Accept numbers from user and perform addition of that numbers

// INPUT 
// 10   20  30  40  50

// OUTPUT
// 150


// INPUT 
// 

// OUTPUT
// 


//////////////////////////////////////////////////////////
//
//  Application Name : Addition of N numbers
//  Input :  10   20  30  40  50  
//  Output : 150  
//  Author : Shrinivas joshi   
//  Date : 02/11/2022    
//
//////////////////////////////////////////////////////////
//DYNAMIC memory allocation
//with loops
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////
//Bussiness logic function
//////////////////////////////////////////////////////////

int Summation (int Arr[],int iSize)
{
    int iCnt = 0 , iSum = 0;
    //printf("%d/n",sizeof(Data)) ;/////////////////
    for (iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        iSum = iSum +Arr[iCnt];
    }
    return iSum;
}



//////////////////////////////////////////////////////////
//Entry point function 
//////////////////////////////////////////////////////////
int main()
{
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;
    int iLength = 0;

    printf("Enter number of Elements you want to store\n");
    scanf("%d",&iLength);

    

    ptr = (int*)malloc(iLength*sizeof(int));

    printf("Enter the elements\n");
    for (iCnt = 0 ;iCnt < 5 ;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    printf("Elemts are:\n");
        for (iCnt = 0 ;iCnt < 5 ;iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    
    iRet = Summation (ptr,iLength);
    printf("Summation of all elements is: %d\n",iRet);

    free(ptr);
    return 0;
}

