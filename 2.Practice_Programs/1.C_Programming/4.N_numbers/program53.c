// APPLICATION NAME : Accept numbers from user and return the index at which the number is present for the first in that N numbers

// INPUT 
//2  3  2   1   4   1   6
//check = 1

// OUTPUT
//index = 3



//////////////////////////////////////////////////////////
//
//  Application Name : Display Summation Even/Odd numbers in  N numbers
//  Input :  2  3  2   1   4   1   6 check =1  
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

int ChkFrequency(int *Arr,int iSize,int iNum)
{
    int iCnt = 0;
   for (iCnt = 0; iCnt < iSize; iCnt++)
   {
     if (Arr[iCnt]  == iNum)
     {
       break;
     } 
   }
   
   if(iCnt == iSize)
      {
        return -1;
      }
      else
      {
        return iCnt;
      }
 
}
//////////////////////////////////////////////////////////
//Entry point function 
//////////////////////////////////////////////////////////
int main()
{
    int *ptr = 0, iCnt = 0;
    int iLength = 0;
    int iChkNum = 0;
    int iRet = 0;

    printf("Enter the number of Elements :\n");
    scanf("%d",&iLength);

    ptr = (int*)malloc(iLength * sizeof(int));

    printf("Enter the elemets :\n");
    for (iCnt = 0; iCnt < iLength ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the number which you want to check :\n");
    scanf("%d",&iChkNum);
    iRet = ChkFrequency(ptr,iLength,iChkNum);
   
    if(iRet == -1)
    {
      printf("Number %d is Not Present\n",iChkNum);
      
    }
    else
    {
      printf("Number %d is Present at index %d\n",iChkNum,iRet);
    }

    free(ptr); 


  return 0;
}

