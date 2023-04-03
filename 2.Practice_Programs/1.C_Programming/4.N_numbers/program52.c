// APPLICATION NAME : Accept numbers from user and check weather the number is present in that N numbers

// INPUT 
//2  1  2   1   4   1   6
//check = 1

// OUTPUT
//true



//////////////////////////////////////////////////////////
//
//  Application Name : Display Summation Even/Odd numbers in  N numbers
//  Input :  2  1  2   1   4   1   6 check =1  
//  Output : true
//  Author : Shrinivas joshi   
//  Date : 08/11/2022    
//
//////////////////////////////////////////////////////////
//DYNAMIC memory allocation
//with loops
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////
//Bussiness logic function
//////////////////////////////////////////////////////////

bool ChkFrequency(int *Arr,int iSize,int iNum)
{
    int iCnt = 0;
    int iFrq = 0;
   for (iCnt = 0; iCnt < iSize; iCnt++)
   {
     if (Arr[iCnt]  == iNum)
     {
        iFrq++;
        if(iFrq == 1)
        {
          break;
        }
     } 
   }
   
    if(iFrq == 1)
      {
        return true;
      }
      else{
        return false;
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
    bool bRet = false;

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
    bRet = ChkFrequency(ptr,iLength,iChkNum);
   
    if(bRet == true)
    {
      printf("The Number is Present\n");
    }
    else
    {
      printf("The Number is Not Present\n");
    }

    free(ptr); 


  return 0;
}

