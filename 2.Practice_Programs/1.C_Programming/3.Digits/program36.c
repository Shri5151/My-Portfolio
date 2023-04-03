// APPLICATION NAME : Accept number from user and reverse the given number
// INPUT 
// 751

// OUTPUT
// 157


// INPUT 
// 121

// OUTPUT
// 121


//////////////////////////////////////////////////////////
//
//  Application Name :Number of Digits 
//  Input :  751/121   
//  Output :  157/121
//  Author : Shrinivas joshi   
//  Date : 02/11/2022    
//
//////////////////////////////////////////////////////////
#include<stdio.h>


///////////////////////////////////////////////////////////
//Bussiness logic function
//////////////////////////////////////////////////////////

int Resvers(int iNo)
{
    int iChkPalindrom = iNo;
    int iDigit = 0, iRev = 0;
    
    if (iNo<0)
    {
        iNo = -iNo;
    }
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10)+iDigit;
        iNo = iNo/10;
    }   
    return iRev;
}



//////////////////////////////////////////////////////////
//Entry point function 
//////////////////////////////////////////////////////////


int main()
{
    int iValue = 0;
    int iResult = 0;
    

    printf("Applictation to determine weather the given number is a palindrom number or not\n");
    printf("Enter Your Number\n");
    scanf("%d",&iValue);

    iResult = Resvers(iValue);

    printf("the reverse for is %d\n",iResult);
    
    return 0;
}

