// APPLICATION NAME : Accept number from user and return the number of EVEN and ODD digits

// INPUT 
// 751 

// OUTPUT
// 0,3


// INPUT 
// 1056 

// OUTPUT
// 2,2


//////////////////////////////////////////////////////////
//
//  Application Name :Number of Digits 
//  Input :  751/1056   
//  Output :  0,3/2,2
//  Author : Shrinivas joshi   
//  Date : 01/11/2022    
//
//////////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////////
//Bussiness logic function
//////////////////////////////////////////////////////////

void Display_Even_Odd_Digits(int iNo)
{
    int iNumber = iNo;
    int iEvenCnt = 0, iOddCnt = 0, iDigit = 0;
    if (iNo == 0)
    {
        iEvenCnt++;
    }
    
    while(iNo!=0)
    {
        iDigit = iNo % 10;
        if ((iDigit % 2) == 0)
        {
            iEvenCnt++;
        }
        else
        {
            iOddCnt++;
        }
        iNo = iNo / 10;
    }
    printf("Number of Even digits in %d is :%d\n",iNumber,iEvenCnt);
    printf("Number of Even digits in %d is :%d\n",iNumber,iOddCnt);
}


//////////////////////////////////////////////////////////
//Entry point function 
//////////////////////////////////////////////////////////


int main()
{
    int iValue = 0;
    

    printf("Applictation to determine number Even and Odd digits in given number\n");
    printf("Enter Your Number\n");
    scanf("%d",&iValue);

    Display_Even_Odd_Digits(iValue);

    

    return 0;
}

