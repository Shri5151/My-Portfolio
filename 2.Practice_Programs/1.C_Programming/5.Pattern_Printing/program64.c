// APPLICATION NAME : Draw pattern on screen
// INPUT 
//4

// OUTPUT
//*  *  *  *
//*  *  *  *
//*  *  *  *
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

void Display(int iRow, int iCol)
{
  int i = 0,j = 0;

  for (i = 1 ; i <= iRow ; i++)
    {
        for(j = 1 ;j <= iCol ; j++)
        {
          printf("*\t");
        }
        printf("\n");
    }
}
//////////////////////////////////////////////////////////
//Entry point function 
//////////////////////////////////////////////////////////
int main()
{
  int iValue1 = 0;
  int iValue2 = 0;
  printf("Enter the number of rows \n");
  scanf("%d",&iValue1);
  
  printf("Enter the number of column \n");
  scanf("%d",&iValue2);

  Display(iValue1,iValue2);
  return 0;
}

