// APPLICATION NAME : Accept number from user and count number of digits from that number 

// INPUT 
// 751 

// OUTPUT
// 3


// INPUT 
// 1056 

// OUTPUT
// 4

//////////////////////////////////////////////////////////
//
//  Application Name :Number of Digits 
//  Input :  751/1056   
//  Output :  3/4
//  Author : Shrinivas joshi   
//  Date : 01/11/2022    
//
//////////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////////
//Bussiness logic function
//////////////////////////////////////////////////////////

int Count_Digits(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;


    if(iNo == 0)        //FILTER
    {
        return 1;
    }

    if (iNo < 0)        //UPDATER
    {
        iNo = -iNo;
    }
    while (iNo != 0)
    { 
        //iDigit = iNo % 10;  not required
        iNo = iNo/10;
        iCnt++;
           
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

    printf("Applictation to determine number of digits in given number\n");
    printf("Enter Your Number\n");
    scanf("%d",&iValue);

    iResult = Count_Digits(iValue);

    printf("Number of digits in %d are %d\n",iValue,iResult);

    return 0;
}

