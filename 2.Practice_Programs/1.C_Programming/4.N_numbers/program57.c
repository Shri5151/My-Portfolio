// APPLICATION NAME : Accept N numbers and one another number and check the last occurane of that another number 
// INPUT 
//10   20    10    90    10

// OUTPUT
//4



//////////////////////////////////////////////////////////
//
//  Application Name : Display array in reverse order
//  Input :  10   20    10    90    10     
//  Output : 4
//  Author : Shrinivas joshi   
//  Date : 09/11/2022    
//
//////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


///////////////////////////////////////////////////////////
//Bussiness logic function
//////////////////////////////////////////////////////////

int LastOccurance(int *Arr,int iSize,int iNum)
{
    int iCnt = 0;
   for (iCnt = iSize-1 ; iCnt >= 0; iCnt--)
   {
     if (Arr[iCnt]  == iNum)
     {
       break;
     } 
   }
   
   if(iCnt == -1)
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
  int *ptr = NULL;
  int iLength = 0;
  int i = 0;
  int iChkNum = 0;
  int iRet = 0;
  

  printf("Enter number of elements :\n");
  scanf("%d",&iLength);

  ptr = (int*)malloc (sizeof (int)*iLength);

  printf("Enter the Elements :\n");
  for (i = 0; i < iLength;i++ )
  {
    scanf("%d",&ptr[i]);
  }

  printf("Enter the number which you want to check :\n");
  scanf("%d",&iChkNum);
  iRet = LastOccurance(ptr,iLength,iChkNum);  

    if(iRet = -1)
  {
      printf("Number not found\n");
  }
  else 
  { 
    printf("%d occured last at the index %d of array\n",iChkNum,iRet);
  }
  free(ptr);

  return 0;
}

