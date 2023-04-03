// APPLICATION NAME : Accept numbers from user and return the Smallest number from that
// INPUT 
//10   20    40    90    35

// OUTPUT
//10



//////////////////////////////////////////////////////////
//
//  Application Name : find smallest in numbers in  N numbers
//  Input :  10   20    40    90    35     
//  Output : 10
//  Author : Shrinivas joshi   
//  Date : 09/11/2022    
//
//////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


///////////////////////////////////////////////////////////
//Bussiness logic function
//////////////////////////////////////////////////////////

int Minimum(int *Arr,int iSize)
{
  int iCnt = 0 ;
  int iMin = Arr[0];
  for (iCnt = 0; iCnt < iSize; iCnt++)
  {
    if (iMin > Arr[iCnt])
    {
      iMin = Arr[iCnt];
    }
  }
 
 return iMin;
}
//////////////////////////////////////////////////////////
//Entry point function 
//////////////////////////////////////////////////////////
int main()
{
  int *ptr = NULL;
  int iLength = 0;
  int i = 0;
  int iRet = 0;

  printf("Enter number of elements :\n");
  scanf("%d",&iLength);

  ptr = (int*)malloc (sizeof (int)*iLength);

  printf("Enter the Elements :\n");
  for (i = 0; i < iLength;i++ )
  {
    scanf("%d",&ptr[i]);
  }
  iRet = Minimum(ptr,iLength);

  printf("The Smallest number from the array is :%d\n",iRet);

  free(ptr);

  return 0;
}

