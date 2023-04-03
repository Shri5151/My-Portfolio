// APPLICATION NAME : Draw pattern on screen
// INPUT 
//row = 4
// Col. = 4 


// OUTPUT
/*
  +  +  +  +  +  +
  +  +           +
  +     +        +
  +        +     +
  +           +  +
  +  +  +  +  +  +

*/


//////////////////////////////////////////////////////////
//
//  Application Name : Pattern printing 1
//  Input : 4,4     
//  Output : 
//  Author : Shrinivas joshi   
//  Date : 15/11/2022    
//
//////////////////////////////////////////////////////////

#include<stdio.h>



///////////////////////////////////////////////////////////
//Bussiness logic function
//////////////////////////////////////////////////////////

void Display(int iRow, int iCol)
{
  int i = 0;
  int j = 0;


  for (i = 1; i <= iRow;i++)
    {
      for (j = 1; j <= iCol; j++)
        
        if((j == 1)||(j == iCol))
          {
            printf("Z\t");
          }
        else if((i == 1)||(i == iRow)) 
          {
            printf("Z\t");
          } 
        else if(i == j)
          {
            printf("z\t");
          }
        else
          {
            printf("\t" );
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

