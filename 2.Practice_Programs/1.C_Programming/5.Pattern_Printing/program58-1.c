// APPLICATION NAME : Draw pattern on screen
// INPUT 
//4

// OUTPUT
//*  *  *  *



//////////////////////////////////////////////////////////
//
//  Application Name : Pattern printing 1
//  Input :      
//  Output : 
//  Author : Shrinivas joshi   
//  Date : 09/11/2022    
//
//////////////////////////////////////////////////////////

#include<stdio.h>



///////////////////////////////////////////////////////////
//Bussiness logic function
//////////////////////////////////////////////////////////

void Display(int iNo)
{
  int iCnt = 0;
  if(iNo < 0)
  {
    iNo = -iNo;
  }
  
  for(iCnt = 1 ; iCnt <= iNo ; iCnt ++ )
  {
    printf("*\t");
  } 
  printf("\n");
}
//////////////////////////////////////////////////////////
//Entry point function 
//////////////////////////////////////////////////////////
int main()
{
  int iValue = 0;
  printf("Enter the number\n");
  scanf("%d",&iValue);
  Display(iValue);
  return 0;
}

