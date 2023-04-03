// APPLICATION NAME : Accept number from user and check weather the given number is palindrome or not (MULTIPLE FUNCTIONS)
// INPUT 
// 751

// OUTPUT
// (not palindrom)157


// INPUT 
// 121

// OUTPUT
// palindrom number (121)


//////////////////////////////////////////////////////////
//
//  Application Name :Number of Digits 
//  Input :  751/121   
//  Output :  N/Y
//  Author : Shrinivas joshi   
//  Date : 02/11/2022    
//
//////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////
//Bussiness logic function
//////////////////////////////////////////////////////////

int Reverse(int iNo)
{
    
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
    
}

bool Check_Palindrom(int iNum)
{
    bool iRet = false;

    iRet = Reverse(iNum);
    if (iRet == iNum)
    {
        return true;
    }
    else
    {
        return false;
    }
}


//////////////////////////////////////////////////////////
//Entry point function 
//////////////////////////////////////////////////////////


int main()
{
    int iValue = 0;
    bool bResult = false;
    

    printf("Applictation to determine weather the given number is a palindrom number or not \n");
    printf("Enter Your Number\n");
    scanf("%d",&iValue);

    bResult = Check_Palindrom(iValue);
    if(bResult == true)
    {
        printf("The given number is a Palindrom Nubmer\n");
    }
    else
    {
        printf("The given number is not a Palindrom number\n");
    }

    return 0;
}

