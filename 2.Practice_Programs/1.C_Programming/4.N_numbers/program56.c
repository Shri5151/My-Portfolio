// APPLICATION NAME : Display array in reverse order
// INPUT 
//10   20    40    90    35

// OUTPUT
//35   90    40    20    10



//////////////////////////////////////////////////////////
//
//  Application Name : Display array in reverse order
//  Input :  10   20    40    90    35     
//  Output : 35   90    40    20    10
//  Author : Shrinivas joshi   
//  Date : 09/11/2022    
//
//////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


///////////////////////////////////////////////////////////
//Bussiness logic function
//////////////////////////////////////////////////////////

void  DisplayReverse(int *Arr,int iSize)
{
  int iCnt = 0;
  for (iCnt = iSize - 1 ; iCnt >= 0 ; iCnt-- )
  {
    printf("%d\t",Arr[iCnt]);
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
  

  printf("Enter number of elements :\n");
  scanf("%d",&iLength);

  ptr = (int*)malloc (sizeof (int)*iLength);

  printf("Enter the Elements :\n");
  for (i = 0; i < iLength;i++ )
  {
    scanf("%d",&ptr[i]);
  }
  printf("Elements in the reverse order :");
  DisplayReverse(ptr,iLength);
  free(ptr);

  return 0;
}

