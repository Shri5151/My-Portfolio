// APPLICATION NAME : Accept numbers from user and return average of that numbers

// INPUT 
// 10   20  30  40  50

// OUTPUT
// 30


// INPUT 
// 

// OUTPUT
// 


//////////////////////////////////////////////////////////
//
//  Application Name : Average of N numbers
//  Input :  10   20  30  40  50  
//  Output : 30
//  Author : Shrinivas joshi   
//  Date : 08/11/2022    
//
//////////////////////////////////////////////////////////
//DYNAMIC memory allocation
//with loops
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////
//Bussiness logic function
//////////////////////////////////////////////////////////

float Average(int Arr[],int iSize)
{
    int iSum = 0,   iCnt = 0;

    for (iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        iSum = iSum + Arr [iCnt];
    }
    return (iSum / iSize);
}

int* Accept(int *ptr,int iSize)
{
    
}

//////////////////////////////////////////////////////////
//Entry point function 
//////////////////////////////////////////////////////////
int main()
{
    int *ptr = NULL;
    int iLength = 0;
    int iCnt = 0;
    float fRet = 0;
    printf("Enter the number of Elements\n");
    scanf("%d",&iLength);

    ptr = (int *)malloc (iLength * sizeof(int));

    printf("Please enter the numbers\n");

    for (iCnt = 0 ; iCnt < iLength ; iCnt++ )
    {
        scanf("%d",&ptr[iCnt]);
    }

    fRet = Average(ptr,iLength);

    printf("the Average of given N numbers is %f",fRet);

    free(ptr);


  return 0;
}

