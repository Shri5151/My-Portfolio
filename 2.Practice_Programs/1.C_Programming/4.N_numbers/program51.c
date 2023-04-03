// APPLICATION NAME : Accept numbers from user and Display frequency of number from that N numbers

// INPUT 
//2  1  2   1   4   1   6
//check = 1

// OUTPUT
//3



//////////////////////////////////////////////////////////
//
//  Application Name : Display Summation Even/Odd numbers in  N numbers
//  Input :  2  1  2   1   4   1   6 check =1  
//  Output : 3
//  Author : Shrinivas joshi   
//  Date : 08/11/2022    
//
//////////////////////////////////////////////////////////
//DYNAMIC memory allocation
//with loops
#include<stdio.h>
#include<stdlib.h>
stdboo

///////////////////////////////////////////////////////////
//Bussiness logic function
//////////////////////////////////////////////////////////

int ChkFrequency(int *Arr,int iSize,int iNum)
{
    int iCnt = 0;
    int iFrq = 0;
   for (iCnt = 0; iCnt < iSize; iCnt++)
   {
     if (Arr[iCnt]  == iNum)
     {
        iFrq++;
     } 
   }
    return iFrq;
     

}
//////////////////////////////////////////////////////////
//Entry point function 
//////////////////////////////////////////////////////////
int main()
{
    int *ptr = 0, iCnt = 0,iRet = 0;
    int iLength = 0;
    int iChkNum = 0;

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
    if (iRet == 0)
    {
      printf("There is no such number\n");
    }
    else
    {
    printf("The Frequency %d is %d\n",iChkNum,iRet);
    }

    free(ptr); 


  return 0;
}

