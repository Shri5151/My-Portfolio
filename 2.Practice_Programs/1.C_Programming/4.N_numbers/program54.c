// APPLICATION NAME : Accept numbers from user and return the largest number from that
// INPUT 
//10   20    40    90    35


// OUTPUT
//90



//////////////////////////////////////////////////////////
//
//  Application Name : find largest from N numbers
//  Input :  10   20    40    90    35     
//  Output : 90
//  Author : Shrinivas joshi   
//  Date : 09/11/2022    
//
//////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


///////////////////////////////////////////////////////////
//Bussiness logic function
//////////////////////////////////////////////////////////

int Maximum(int *Arr,int iSize)
{
  int iCnt = 0 ;
  int iMax = Arr[0];
  for (iCnt = 0; iCnt < iSize; iCnt++)
  {
    if (iMax < Arr[iCnt])
    {
      iMax = Arr[iCnt];
    }
  }
 
 return iMax;
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
  iRet = Maximum(ptr,iLength);

  printf("The largest number from the array is :%d\n",iRet);

  free(ptr);

  return 0;
}

