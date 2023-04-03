// APPLICATION NAME : Accept numbers from user and return number of even numbers from that N numbers

// INPUT 
// 1    2   3   4   5   6

// OUTPUT
// 3


// INPUT 
// 

// OUTPUT
// 


//////////////////////////////////////////////////////////
//
//  Application Name : Even numbers in  N numbers
//  Input :  1    2   3   4   5   6  
//  Output : 3
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

int CountEven(int *Arr,int iSize)
{
    int iEvenCnt = 0;
    int iCnt = 0;

   for (iCnt = 0; iCnt < iSize; iCnt++)
   {
     if (Arr[iCnt] % 2 == 0)
     {
        iEvenCnt++;
     }
   }
    return iEvenCnt;

}
//////////////////////////////////////////////////////////
//Entry point function 
//////////////////////////////////////////////////////////
int main()
{
    int *ptr = 0, iCnt = 0,iRet = 0;
    int iLength = 0;
    printf("Enter the number of Elements :\n");
    scanf("%d",&iLength);

    ptr = (int*)malloc(iLength * sizeof(int));

    printf("Enter the elemets :\n");
    for (iCnt = 0; iCnt < iLength ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = CountEven(ptr,iLength);

    printf("The Even numbers in given N numbers is :%d",iRet);

    free(ptr); 


  return 0;
}

