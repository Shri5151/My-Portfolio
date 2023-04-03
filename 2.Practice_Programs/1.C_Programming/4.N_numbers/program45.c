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
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////
//Bussiness logic function
//////////////////////////////////////////////////////////

int Summation (int Data[],int iSize)
{
    int iCnt = 0 , iSum = 0;
    printf("%d/n",sizeof(Data)) ;/////////////////
    for (iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        iSum = iSum +Data[iCnt];
    }
    return iSum;
}



//////////////////////////////////////////////////////////
//Entry point function 
//////////////////////////////////////////////////////////
int main()
{
    int Arr[5];
    int iCnt = 0;
    int iRet = 0;

    printf("Enter the elements\n");
    for (iCnt = 0 ;iCnt < 5 ;iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
    printf("Elemts are:\n");
        for (iCnt = 0 ;iCnt < 5 ;iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }

    iRet = Summation (Arr,5);
    printf("Summation of all elements is: %d\n",iRet);
    //static memory allocation
    //with loops 
    return 0;
}

