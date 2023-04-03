// APPLICATION NAME : Accept number from user and return the sumation of digits 

// INPUT 
// 751 

// OUTPUT
// 13


// INPUT 
// 1056 

// OUTPUT
// 12


//////////////////////////////////////////////////////////
//
//  Application Name :Number of Digits 
//  Input :  751/1056   
//  Output :  13/12
//  Author : Shrinivas joshi   
//  Date : 01/11/2022    
//
//////////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////////
//Bussiness logic function
//////////////////////////////////////////////////////////

int Sum_Digits(int iNo)
{
    
    int iDigit = 0;
    int iSum = 0;
    
    if (iNo < 0)
    {
        iNo = -iNo;
    }
  
  
    while (iNo != 0)
    { 
        iDigit = iNo % 10;
        iNo = iNo/10;
        iSum = iSum + iDigit;     
    }
    
    return iSum ;
 
}


//////////////////////////////////////////////////////////
//Entry point function 
//////////////////////////////////////////////////////////


int main()
{
    int iValue = 0;
    int iResult = 0;

    printf("Applictation to determine Sum of digits in given number\n");
    printf("Enter Your Number\n");
    scanf("%d",&iValue);

    iResult = Sum_Digits(iValue);

    printf("Sum of digits in %d is %d\n",iValue,iResult);

    return 0;
}

