// APPLICATION NAME : Accept number from user and return the number of EVEN digits

// INPUT 
// 751 

// OUTPUT
// 0


// INPUT 
// 1056 

// OUTPUT
// 2


//////////////////////////////////////////////////////////
//
//  Application Name :Number of Digits 
//  Input :  751/1056   
//  Output :  0/2
//  Author : Shrinivas joshi   
//  Date : 01/11/2022    
//
//////////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////////
//Bussiness logic function
//////////////////////////////////////////////////////////

int Count_Even_Digits(int iNo)
{
    
    int iDigit = 0;
    int iCnt = 0;
    
    if (iNo < 0)
    {
        iNo = -iNo;
    }
  
    if (iNo==0)
    {
        return 1;
    }
  
    while (iNo != 0)
    { 
        iDigit = iNo % 10;
        
        if (iDigit % 2 ==0)
        {
            iCnt++;
        }

        iNo = iNo/10;     
    }
    
    return iCnt;
 
}


//////////////////////////////////////////////////////////
//Entry point function 
//////////////////////////////////////////////////////////


int main()
{
    int iValue = 0;
    int iResult = 0;

    printf("Applictation to determine number Even digits in given number\n");
    printf("Enter Your Number\n");
    scanf("%d",&iValue);

    iResult = Count_Even_Digits(iValue);

    printf("Number of Even digits in %d is %d\n",iValue,iResult);

    return 0;
}

